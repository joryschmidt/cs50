// Makes a checkerboard based on whether the sum of the coordinates is even

var n = 8;

for (var i=0; i<n; i++) {
  var string = "";
  for (var j=0; j<n; j++) {
    (i + j) % 2 == 0 ? string += "#" : string += " ";
  }
  console.log(string);
}