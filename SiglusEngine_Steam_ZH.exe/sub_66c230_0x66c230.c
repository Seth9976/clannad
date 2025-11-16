// 函数: sub_66c230
// 地址: 0x66c230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* result

if (arg2[5] u< 0x10)
    result = arg2
else
    result = *arg2

while (true)
    int32_t* edi_1
    
    if (arg2[5] u< 0x10)
        edi_1 = arg2
    else
        edi_1 = *arg2
    
    if (result == arg2[4] + edi_1)
        result.b = 1
        return result
    
    int32_t edi_3
    
    if (arg1[3].b == 0)
        char* edi_2 = *arg1
        
        if (edi_2 != arg1[1])
            if (arg1[2] == 0xa)
                arg1[4] += 1
            
            arg1[2] = zx.d(*edi_2)
            *arg1 = &edi_2[1]
            edi_3 = arg1[2]
        else
            arg1[2] = 0xffffffff
            edi_3 = 0xffffffff
    else
        arg1[3].b = 0
        edi_3 = arg1[2]
    
    if (edi_3 != sx.d(*result))
        break
    
    result = &result[1]

if (arg1[2] != 0xffffffff)
    arg1[3].b = 1

result.b = 0
return result
