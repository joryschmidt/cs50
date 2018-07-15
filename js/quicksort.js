function quicksort(arr, start, end) {

  var length = arr.length;
  if (!start && !end) start = 0, end = length - 1;
  // Pivot value
  var p = arr[end];
  // Index of elements greater than pivot
  var q = start;

  for (var i=0; i<length - 1; i++) {
    if (arr[i] <= p) {
      swap(i, q, arr);
      q++;
    }
  }
  swap(q, length - 1, arr);
}

function swap(a, b, array) {
  var temp = array[a];
  array[a] = array[b];
  array[b] = temp;
}
