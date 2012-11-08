#!/bin/bash
echo "Enter two numbers seperate by an operator: "
read NUM1 OP NUM2
ANS= `expr "$NUM1" "$OP" "$NUM2"`
echo "Answer: $NUM1 $OP $NUM2 = $ANS"

