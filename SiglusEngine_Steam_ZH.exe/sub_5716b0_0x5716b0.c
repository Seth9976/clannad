// 函数: sub_5716b0
// 地址: 0x5716b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
void* edi = arg2[1]
arg1[1] = edi

if (edi != 0)
    int32_t ecx = *(edi + 4)
    
    if (ecx == 0)
    label_5716e8:
        arg1[1] = 0
    else
        while (true)
            int32_t eax_1 = ecx
            
            if (eax_1 == *(edi + 4))
                *(edi + 4) = ecx + 1
            else
                eax_1 = *(edi + 4)
            
            if (eax_1 == ecx)
                break
            
            ecx = *(edi + 4)
            
            if (ecx == 0)
                goto label_5716e8

if (arg1[1] != 0)
    *arg1 = *arg2

return arg1
