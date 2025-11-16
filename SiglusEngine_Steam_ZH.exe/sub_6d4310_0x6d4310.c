// 函数: sub_6d4310
// 地址: 0x6d4310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg4
char* esi = arg3

if (esi != 0 && i u< arg2)
    if (arg5 != 0)
        arg3.b = *arg5
        
        if (arg3.b != 0)
            void* edx_1 = arg5 - i
            
            while (i u< arg2 - 1)
                esi[i] = arg3.b
                i += 1
                arg3.b = *(edx_1 + i)
                
                if (arg3.b == 0)
                    break
    
    esi[i] = 0

return i
