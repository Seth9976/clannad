// 函数: sub_49981d
// 地址: 0x49981d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char result = *arg2

if (result u>= 0x29 && result u<= 0x7a && (result u<= 0x5a || result u>= 0x61))
    result = arg2[1]
    
    if (result u>= 0x29 && result u<= 0x7a && (result u<= 0x5a || result u>= 0x61))
        result = arg2[2]
        
        if (result u>= 0x29 && result u<= 0x7a && (result u<= 0x5a || result u>= 0x61))
            result = arg2[3]
            
            if (result u>= 0x29 && result u<= 0x7a && (result u<= 0x5a || result u>= 0x61))
                return result

sub_466959(arg1, "invalid chunk type")
noreturn
