// 函数: sub_40889e
// 地址: 0x40889e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg2
int32_t* ecx = arg1

while (true)
    int32_t edx_1 = *eax
    *ecx = edx_1
    
    if (edx_1.w == 0xff)
        break
    
    ecx[1] = eax[1]
    eax = &eax[2]
    ecx = &ecx[2]

int32_t result = eax[1]
ecx[1] = result
return result
