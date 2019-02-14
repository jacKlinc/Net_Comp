using System;

namespace MathFuncDLL {
    public class Class1 {
        private float sqrtFunction(float runTot) {
            runTot = (float)Math.Sqrt(runTot); // sqrt of whatever is in box 
            return runTot;
        }

        private float squaredFunction(float runTot) {
            runTot = (float)Math.Pow(runTot, 2); // squared of whatever is in box 
            return runTot;
        }

        private float powFunction(float runTot, float powN) {
            runTot = (float)Math.Pow(runTot, powN); // squared of whatever is in box 
            return runTot;
        }
    }
}
