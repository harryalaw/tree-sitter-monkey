let fibonacci = fn(x) {
    if (x == 0) {
        return 0;
    } else {
        if (x == 1) {
            return 1;
        } else {
            fibonacci(x - 1) + fibonacci(x - 2)
        }
    }
}
fibonacci(35);

true;
false;

let map = fn(arr, f) {
    let iter = fn(
        arr,
        accumulated
    ) {
        if (len(arr) == 0) {
            accumulated
        } else {
            iter(rest(arr), push(accumulated, f(first(arr))));
        }
    }
    iter(arr, [])
};

let a = [1, 2, 3, 4];
let double = fn(x) { x * 2 };

map(a, double)

let hello = "foo";


let fib = fn(x) {
    return "bar";
}

