// 函数: sub_4c16e2
// 地址: 0x4c16e2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
int32_t i = 0
int32_t* ecx_1 = arg2 - eax

do
    int32_t edx_1 = *eax
    
    if (edx_1 != 0xffffffff && edx_1 != *(ecx_1 + eax))
        return 0
    
    i += 1
    eax = &eax[1]
while (i u< 4)

return 1
