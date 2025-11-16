// 函数: sub_1a995dd
// 地址: 0x1a995dd
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (data_1c09308 == 0)
    sub_1a9493b()

char* result = data_1c092e8
int32_t eax
eax.b = *result

if (eax.b == 0x22)
    while (true)
        eax.b = result[1]
        result = &result[1]
        
        if (eax.b == 0x22)
            break
        
        if (eax.b == 0)
            break
        
        if (sub_1a9c64e(eax.b) != 0)
            result = &result[1]
    
    if (*result == 0x22)
        goto label_1a9961a
else if (eax.b u> 0x20)
    do
        result = &result[1]
    while (*result u> 0x20)

while (true)
    eax.b = *result
    
    if (eax.b == 0 || eax.b u> 0x20)
        return result
    
label_1a9961a:
    result = &result[1]
