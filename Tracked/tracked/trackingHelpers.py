'''
Created on 24.06.2021

@author: Enzo Brancaccio
'''

from .location import Location
from .tracked import Tracked
from numbers import Number

def makeTracked(value, location = None):
    if(isinstance(value, Tracked)):
        return value
    else:
        if(location is None):
            return Tracked(value, Location())
        else:
            return Tracked(value, location)

def inv_plus(lhs, rhs):
    isNumeric = ((isinstance(lhs, Number)) and (isinstance(rhs, Number)))
    if(isNumeric):
        return lhs - rhs

def inv_minus(lhs, rhs):
    isNumeric = ((isinstance(lhs, Number)) and (isinstance(rhs, Number)))
    if(isNumeric):
        return lhs + rhs

def inv_mul(lhs, rhs):
    isNumeric = ((isinstance(lhs, Number)) and (isinstance(rhs, Number)))
    if(isNumeric):
        return lhs / rhs

def inv_div(lhs, rhs):
    isNumeric = ((isinstance(lhs, Number)) and (isinstance(rhs, Number)))
    if(isNumeric):
        return lhs * rhs
    
def inverse_op(operator):
    if(operator == "+"):
        return "-"
    elif(operator == "-"):
        return "+"
    elif(operator == "*"):
        return "/"
    elif(operator == "/"):
        return "*"
    elif(operator == "swap"):
        return "swap"
    elif(operator == "sin"):
        return "asin"
    elif(operator == "cos"): 
        return "acos"
    elif(operator == "asin"): 
        return "sin"
    elif(operator == "acos"): 
        return "cos"
    else:
        raise ValueError("no valid operator '" + operator + "'")

def is_operator(token):
    if(token == "+"): 
        return 2
    elif(token == "-"): 
        return 2;
    elif(token == "*"): 
        return 2;
    elif(token == "/"): 
        return 2;
    elif(token == "sin"): 
        return 1;
    elif(token == "cos"): 
        return 1;
    elif(token == "asin"): 
        return 1;
    elif(token == "acos"): 
        return 1;
    elif(token == "swap"): 
        return 1;
    else:
        return 0