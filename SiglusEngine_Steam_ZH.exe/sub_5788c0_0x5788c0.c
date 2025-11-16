// 函数: sub_5788c0
// 地址: 0x5788c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** ebx = *arg1
int32_t* edx = ebx
void** eax = ebx[1]
void** ecx = eax

if (*(ecx + 0xd) == 0)
    int32_t edi_2 = *arg3
    
    do
        int32_t esi_1 = ecx[4]
        
        if (esi_1 u>= edi_2)
            if (*(edx + 0xd) != 0 && edi_2 u< esi_1)
                edx = ecx
            
            ebx = ecx
            ecx = *ecx
        else
            ecx = ecx[2]
    while (*(ecx + 0xd) == 0)

if (*(edx + 0xd) == 0)
    eax = *edx

while (*(eax + 0xd) == 0)
    if (*arg3 u>= eax[4])
        eax = eax[2]
    else
        edx = eax
        eax = *eax

*arg2 = ebx
arg2[1] = edx
return arg2
