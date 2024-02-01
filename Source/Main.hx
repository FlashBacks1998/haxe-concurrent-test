package;

import hx.concurrent.atomic.AtomicInt;
import hx.concurrent.Future;
import openfl.Lib;
import hx.concurrent.collection.SynchronizedArray;
import openfl.display.Sprite;
import openfl.text.TextField;
import hx.concurrent.executor.Executor;

class Main extends Sprite
{
    var executor:Executor = Executor.create(16);
    var label:TextField;

    public function new()
    {
        super();

		executor.start();		
		trace(executor.state);

		var array = new SynchronizedArray<Float>();
		var done = new AtomicInt();
		var futures = [];

		var task = function ():Void {
			var start = Lib.getTimer();
			var rand = Math.random() * 10000;

            do {
                rand = Math.random() * 10000;
            } while (rand > 10);

			array.add(rand);
			var progress = done.incrementAndGet();

			trace("task", progress/10, Lib.getTimer() - start, rand);
		}

		var start = Lib.getTimer();
		trace("submitting...");
		for (i in 0...1000)
		{
			futures.push(executor.submit(task));
			//trace(i);
		}

		trace("waiting...");
		var result = executor.submit(task);
		
		trace("done", result);

		done.value = 0;

		do {
			trace(done.toString());
		} while (!result.isComplete());

		var endConcurrent = Lib.getTimer() - start;
		trace("haxe-concurrent done", endConcurrent);

		start = Lib.getTimer();
		for (i in 0...1000)
			task();

		var endNative = Lib.getTimer() - start;
		trace("native done", endNative);

        // Display times in a TextField
        label = new TextField();
        label.text = "haxe-concurrent: " + endConcurrent + " ms\nnative: " + endNative + " ms";
        label.y = 50; // Adjust the vertical position of the label
        addChild(label);

		//trace(futures);
    }
}
