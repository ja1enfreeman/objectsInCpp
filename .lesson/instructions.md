<p><strong>Assignment Description </strong></p>
<p>Write a class called <code>Dog</code> in C++. Dogs have attributes (such as number of legs and eye color), and they can run and bark and wag tails. Dogs can also optionally have a bone, and you'll have to create a <code>Bone</code> class for this.</p>
<p>At a minimum, Dogs should have the following attributes:</p>
<ul>
    <li><code>numberOfLegs</code> (integer, must be between 0 and 4). Default to 4 (can be changed with a setter as shown below).</li>
    <li><code>eyeColor</code> (a string that could be of any value)</li>
    <li><code>furColor</code> (a string that could be of any value)</li>
    <li><code>weight</code> (a float, must be between 1 and 200)</li>
    <li><code>isHappy</code> (a boolean, defaulting to true)</li>
    <li><code>name</code> (a string that could be of any value)</li>
  <li><code>bone</code> (a pointer to a <code>Bone</code> instnace that could be NULL)</li>
</ul>
<p>Dogs should have a constructor and a destructor:</p>
<ul>
    <li>The constructor should take one argument: a string representing the name. It should print a message noting that the dog as been created (e.g "_name_ is alive!")</li>
    <li>The destructor should print the dog's name and a message (e.g. "_name_ is no longer with us")</li>
</ul>
<p>Dogs should provide the following 7 public functions (at a minimum):</p>
<p><code>void run(howFar, howFast)</code></p>
<ul>
    <li><em>howFar</em> is an integer between 0 and 1000. If <em>howFar</em> is outside this range, then <strong>run</strong> should not do anything.
        <ul>
            <li>The <strong>run</strong> method will print one "#" character for each value between 0 and <em>howFar</em>.</li>
        </ul>
    </li>
    <li><em>howFast</em> is an integer between 0 and 1000. It is the number of <em>milliseconds</em> to sleep (see <strong>hints</strong> below for how to sleep) between each print of the "#" character. There should be no newline until the last "#" is printed. If <em>howFast</em> is out of the accepted range, it should be set to 0. Note that as <em>howFast </em>increases the perceived "speed" of the run will decrease (more wait between each "#").</li>
    <li>If the dog has less than three legs, then <strong>run</strong> should not do anything.</li>
    <li>If the dog has exactly three legs, sleep time between each "#" should 25% greater than a 4 legged dog.</li>
    <li>Note that the # character must actually appear on the screen between sleeps (not just all at once; see <strong>hints</strong> below)</li>
    <li><strong>run</strong> should also print the number of legs the dog is using to run</li>
    <li><strong>run</strong> should print a message stating the values for <em>howFar</em> and <em>howFast</em></li>
</ul>
<p><code>void bark(numTimes)</code></p>
<ul>
    <li>should take a parameter of how many times to bark</li>
    <li>should print the dogs name</li>
    <li>if the dogs weight is &lt; 100, then
        <ul>
            <li style="list-style-type: none;">
                <ul>
                    <li>it should print the word "yap!!!" <em>numTimes</em></li>
                </ul>
            </li>
            <li>otherwise
                <ul>
                    <li>should print the word "WOOF!!!" <em>numTimes</em></li>
                </ul>
            </li>
        </ul>
    </li>
</ul>
<p><code>void wag(numTimes, howFast)</code></p>
<ul>
    <li><em>numTimes</em> is an integer between 0 and 1000. If <em>numTimes</em> is outside this range, then <strong>wag</strong>&nbsp;should not do anything.</li>
    <li>If the dog is happy, the <strong>wag</strong> method will print alternating "\" and "/" characters separated by a space. The total number of slashes (both types) should be <em>numTimes</em>. For example if the dog wags 10 times the output would be <code>\ / \ / \ / \ / \ /</code>
        <ul>
            <li>There should be a single space printed between each "\" and "/"</li>
        </ul>
    </li>
    <li>If the dog is not happy, <strong>wag</strong> doesn't do anything.</li>
    <li>Once the dog is done wagging, he loses his bone and should no longer be happy.</li>
    <li><em>howFast</em> is an integer between 0 and 1000. it is the number of milliseconds to sleep between each print of the "\" or "/" characters. If <em>howFast</em> is out of the accepted range, it should be set to 0. Note that like with "run", increasing <em>howFast </em>will result in more wait time between each "wag".</li>
    <li>There should be no newline until the last "/" or "\" is printed.</li>
    <li>Should print the values for <em>numTimes</em> and <em>howFast</em></li>
</ul>
<p><code>void setWeight(weight)</code></p>
<ul>
    <li><em>weight</em> is a double</li>
    <li>if the given <em>weight </em>is &lt;= 0, this method should not change the dog's weight.</li>
</ul>
<p><code>void setNumberOfLegs(numLegs)</code></p>
<ul>
    <li><em> numLegs</em> is an integer</li>
    <li>if <em>numLegs</em> is &lt;= 0 or &gt; 4, then you should set the dog to have 4 legs.</li>
</ul>
<p><code>void setHappiness(isHappy)</code></p>
<ul>
    <li>happy is a boolean</li>
</ul>
<p><code>void addBone()</code></p>
<ul>
    <li>makes the dog happy by setting the dogs happiness to true</li>
    <li>also <em>dynamically</em> declares a new Bone. See the <strong>hints</strong> below for how to handle giving the dog a bone.</li>
</ul>
<p>You must also create a <code>Bone</code> class. The <code>Bone</code> class is pretty simple. It just has a constructor and a destructor. Your destructor should simply print "bone going away."</p>
<p>I will be testing your <code>Dog</code> class using my own main class. So your <code>Dog</code> class <strong>must</strong> be called <code>Dog</code>, and it <strong>must</strong> implement at least the <code>bark</code>, <code>wag</code>, <code>setName</code>, <code>setWeight</code>, <code>setNumberOfLegs</code> and <code>run</code> methods with the parameters as specified above. Additionally, <code>Dog</code> must correctly implement the constructor and destructor as described.</p>
<p>You don't have to error check the color attributes. In other words, you can accept whatever color values are used. But you should provide methods to get and set the <code>eyeColor</code>, and <code>furColor</code>, and any other attributes you decide to make.</p>
<p><strong>Hints</strong></p>
<ul>
    <li><code>cout.flush()</code> will come in handy when combining cout statements with sleep statements (see next bullet point). If you don't "flush" the output buffer before each sleep statement, you may not see any output until after *all* sleep statements are complete.</li>
    <li>Look up <code>usleep</code> (in <code>unistd.h</code>) for how to sleep (e.g. <a href="https://pubs.opengroup.org/onlinepubs/7908799/xsh/usleep.html" target="_blank" rel="noopener">https://pubs.opengroup.org/onlinepubs/7908799/xsh/usleep.html</a>). Note that the "u" in "usleep" stands for microseconds (the Greek letter &mu; is the scientific prefix micro meaning one millionth), which means that to sleep for one millisecond (1000 microseconds) you need to call "usleep" with the argument 1000.</li>
    <li>You will need an <em>instance variable</em> on the Dog class to point to a Bone instance. That instance may be null (like in the beginning when the dog isn't happy), but adding a bone should assign that variable to a new Bone instance. Removing a bone should delete the Bone instance.</li>
    <li>If you declare a pointer to something, it is good practice to initialize it to <code>NULL</code>.</li>
    <li>Anything that is created with <code>new</code> must be cleaned up!</li>
</ul>
<p><strong>Other Requirements</strong></p>
<p>Do not clutter your <code>.h</code> and <code>.cpp</code> files with stuff that should not be included. Only include things that are needed by that file directly!</p>
<p>Do not do any variable initialization or assignments in your <code>.h</code> files. This type of thing should be done in your class constructor.</p>
<p>Make sure that you set your access modifiers correctly for the members of your class.</p>
<p>Your submission should contain the following:</p>
<ul>
    <li><code>Dog.h</code>: the class definition for <code>Dog</code>.</li>
    <li><code>Dog.cpp</code>: the implementations of all instance methods (<code>run</code>, <code>bark</code>, etc.) along with the constructor and destructor.</li>
    <li><code>Bone.h</code>: the class definition for <code>Bone</code>.</li>
    <li><code>Bone.cpp</code>: the implementations of the Bone constructor and destructor.</li>
    <li><code>main.cpp</code>: The program file which includes a <code>main</code> method to test your classes. You may use the following code snippet to test your classes:
        <pre style="color: #000020; background: #f6f8ff;"><span style="color: #200080;">int</span> <span style="color: #400000;">main</span><span style="color: #308080;">(</span> <span style="color: #308080;">)</span> <span style="color: #406080;">{</span>
  Dog dog1<span style="color: #308080;">(</span><span style="color: #800000;">"</span><span style="color: #1060b6;">Fido</span><span style="color: #800000;">"</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>setWeight<span style="color: #308080;">(</span><span style="color: #008000;">5.0</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>bark<span style="color: #308080;">(</span><span style="color: #008c00;">5</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>setNumberOfLegs<span style="color: #308080;">(</span><span style="color: #008c00;">3</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>run<span style="color: #308080;">(</span><span style="color: #008c00;">20</span><span style="color: #308080;">,</span><span style="color: #008c00;">400</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>addBone<span style="color: #308080;">(</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
  dog1<span style="color: #308080;">.</span>wag<span style="color: #308080;">(</span><span style="color: #008c00;">10</span><span style="color: #308080;">,</span><span style="color: #008c00;">550</span><span style="color: #308080;">)</span><span style="color: #406080;">;</span>
<span style="color: #406080;">}</span>
</pre>
        <p>Feel free to modify this as needed to test your classes. Remember I will be using my own <code>main</code> method to test your classes.</p>
    </li>
</ul>
<p><strong>Submit</strong></p>
<p>A link to your repl.it project (URL copied from the address bar)</p>
<p><strong>Sample Output</strong></p>
<p>If you use the code shown above in a <code>main</code> method you should see something like the following:</p>
<pre style="background-color: #0d1628; width: 600px; color: #eee; padding: 10px;">Fido is alive!
I'm Fido and I'm here to say:
  yap!!
  yap!!
  yap!!
  yap!!
  yap!!
Fido is running to catch squirrels on 3 legs | run: 20, sleep: 533ms
####################
Fido is tired now. My tail is dragging.
wow, thanks for the bone!
I'm Fido, and I'm happy. I'm wagging my tail! | wags: 10, sleep: 550ms
\ / \ / \ / \ / \ /
bone going away
I'm Fido, and I'm done being happy.
all done.
Fido is no longer with us.
</pre>