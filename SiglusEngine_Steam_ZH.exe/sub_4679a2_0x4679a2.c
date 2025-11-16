// 函数: sub_4679a2
// 地址: 0x4679a2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
char ecx = *(ebx + 9)

if (ecx u>= 8)
    return 

int32_t eax = *ebx
uint32_t ecx_1 = zx.d(ecx)
int32_t edi
int32_t var_10_1 = edi
int32_t ecx_5
int32_t edx

if (ecx_1 == 1)
    char* esi_9 = ((eax - 1) u>> 3) + arg2
    char* edi_3 = eax + arg2 - 1
    edx = 7 - ((eax - 1) & 7)
    
    if (eax u> 0)
        arg2 = eax
        int32_t i
        
        do
            ebx.b = *esi_9
            ecx_5.b = edx.b
            ebx.b u>>= ecx_5.b
            ebx.b &= 1
            *edi_3 = ebx.b
            
            if (edx != 7)
                edx += 1
            else
                edx = 0
                esi_9 -= 1
            
            edi_3 -= 1
            i = arg2
            arg2 -= 1
        while (i != 1)
        ebx = arg1
else if (ecx_1 == 2)
    char* esi_6 = ((eax - 1) u>> 2) + arg2
    char* edi_2 = eax + arg2 - 1
    edx = (3 - ((eax - 1) & 3)) << 1
    
    if (eax u> 0)
        arg2 = eax
        int32_t i_1
        
        do
            ebx.b = *esi_6
            ecx_5.b = edx.b
            ebx.b u>>= ecx_5.b
            ebx.b &= 3
            *edi_2 = ebx.b
            
            if (edx != 6)
                edx += 2
            else
                edx = 0
                esi_6 -= 1
            
            edi_2 -= 1
            i_1 = arg2
            arg2 -= 1
        while (i_1 != 1)
        ebx = arg1
else if (ecx_1 == 4)
    char* esi_3 = ((eax - 1) u>> 1) + arg2
    char* edi_1 = eax + arg2 - 1
    edx = (1 - ((eax - 1) & 1)) << 2
    
    if (eax u> 0)
        arg2 = eax
        int32_t i_2
        
        do
            ebx.b = *esi_3
            ecx_5.b = edx.b
            ebx.b u>>= ecx_5.b
            ebx.b &= 0xf
            *edi_1 = ebx.b
            
            if (edx != 4)
                edx = 4
            else
                edx = 0
                esi_3 -= 1
            
            edi_1 -= 1
            i_2 = arg2
            arg2 -= 1
        while (i_2 != 1)
        ebx = arg1

ecx_5.b = *(ebx + 0xa)
edx.b = ecx_5.b
edx.b <<= 3
*(ebx + 9) = 8
*(ebx + 0xb) = edx.b
ebx[1] = zx.d(ecx_5.b) * eax
