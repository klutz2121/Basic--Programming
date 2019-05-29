function iqTest(numbers){
console.log(numbers);
var odd = 0, even = 0, o = 1, e = 1, pos1, pos2;
var mony=[];
numbers = numbers.split(" ");
 for ( var i = 0; i < numbers.length; i++ )
    mony[i] = parseInt(numbers[i]);
 for(var i=0;i<mony.length;i++){
       if(mony[i]%2==0){
        even++;
       }
       else odd++;
       }
       if(odd>even){
         for(var i=0;i<mony.length;i++){
         if(mony[i]%2==0)
         return i+1;
         }}
        if(odd<even){
         for(var i=0;i<mony.length;i++){
         if(mony[i]%2!=0)
         return i+1;
         }}
}
