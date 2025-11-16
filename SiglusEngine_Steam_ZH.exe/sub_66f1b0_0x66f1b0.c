// 函数: sub_66f1b0
// 地址: 0x66f1b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* edi = arg2
void* ecx = edi
void* var_8_1 = ecx
void* eax = (edi << 1) + 2
bool cond:0 = eax != arg4

if (eax s< arg4)
    do
        ecx.w = *(arg3 + (eax << 1))
        
        if (ecx.w u< *(arg3 + (eax << 1) - 2))
            eax -= 1
        
        int16_t* edx = eax * 2
        ecx.w = *(edx + arg3)
        *(arg3 + (edi << 1)) = ecx.w
        edi = eax
        eax = &edx[1]
        cond:0 = eax != arg4
    while (eax s< arg4)
    
    ecx = var_8_1

if (not(cond:0))
    eax.w = *(arg3 + (arg4 << 1) - 2)
    *(arg3 + (edi << 1)) = eax.w
    edi = arg4 - 1

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(edi - 1)
int32_t eax_4 = (eax_2 - edx_1) s>> 1

if (ecx s>= edi)
    int16_t* eax_8
    eax_8.w = *arg5
    *(arg3 + (edi << 1)) = eax_8.w
    return eax_8

do
    int16_t ecx_1 = *(arg3 + (eax_4 << 1))
    
    if (ecx_1 u>= *arg5)
        break
    
    *(arg3 + (edi << 1)) = ecx_1
    edi = eax_4
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(eax_4 - 1)
    eax_4 = (eax_6 - edx_2) s>> 1
while (var_8_1 s< edi)

eax_4.w = *arg5
*(arg3 + (edi << 1)) = eax_4.w
return eax_4
