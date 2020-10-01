var t0=performance.now();
problem("pranavbhadola",[2,9,11]);
function problem(a,b)
{
    var d=b[0],e=0;
     helper(b[e+1]);
    function helper(c)
    {
        if(e==d)
        {return 1;}
        var string=a.slice(0,c);
        var count=0;
        for(var i=0;i<string.length-1;i++)
        {
            if(string[i]==string[c-1])
            count++;
        }
        console.log(count);
        e++;
        helper(b[e+1]);
    }   
}
var t1=performance.now();
console.log((t1-t0)/1000);