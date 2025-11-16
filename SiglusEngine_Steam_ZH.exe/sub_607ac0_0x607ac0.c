// 函数: sub_607ac0
// 地址: 0x607ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
void* edi = arg2
void* ecx = edi
void* var_8_1 = ecx
void* eax = (edi << 1) + 2
bool cond:0 = eax != arg4

if (eax s< arg4)
    do
        if (*(eax + arg3) s< *(arg3 + eax - 1))
            eax -= 1
        
        *(arg3 + edi) = *(eax + arg3)
        edi = eax
        eax = (eax << 1) + 2
        cond:0 = eax != arg4
    while (eax s< arg4)
    
    ecx = var_8_1

if (not(cond:0))
    eax.b = *(arg3 + arg4 - 1)
    *(arg3 + edi) = eax.b
    edi = arg4 - 1

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(edi - 1)
char* eax_4 = (eax_2 - edx_1) s>> 1

if (ecx s>= edi)
    char* eax_8
    eax_8.b = *arg5
    *(edi + arg3) = eax_8.b
    return eax_8

do
    ecx.b = *(eax_4 + arg3)
    
    if (ecx.b s>= *arg5)
        break
    
    *(edi + arg3) = ecx.b
    edi = eax_4
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(eax_4 - 1)
    eax_4 = (eax_6 - edx_2) s>> 1
while (var_8_1 s< edi)

eax_4.b = *arg5
*(edi + arg3) = eax_4.b
return eax_4
