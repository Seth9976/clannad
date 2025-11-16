// 函数: sub_6bda90
// 地址: 0x6bda90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]
int32_t eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_10_3 = ecx
        sub_607420(arg1)
    
    char* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        sub_607ff0(ecx_4, arg2)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 2
    
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_607420(arg1)
    
    char* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        sub_607ff0(ecx_2, *arg1 + ((edx_2 u>> 0x1f) + edx_2) * 0x18)
        arg1[1] += 0x18
        return 

arg1[1] += 0x18
