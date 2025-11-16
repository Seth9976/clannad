// 函数: sub_66d700
// 地址: 0x66d700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_66c1d0(arg1)
int32_t result

if (arg1[3].b == 0)
    char* ecx = *arg1
    
    if (ecx != arg1[1])
        if (arg1[2] == 0xa)
            arg1[4] += 1
        
        arg1[2] = zx.d(*ecx)
        *arg1 = &ecx[1]
        result = arg1[2]
    else
        arg1[2] = 0xffffffff
        result = 0xffffffff
else
    arg1[3].b = 0
    result = arg1[2]

if (result == arg2)
    result.b = 1
    return result

if (arg1[2] != 0xffffffff)
    arg1[3].b = 1

result.b = 0
return result
