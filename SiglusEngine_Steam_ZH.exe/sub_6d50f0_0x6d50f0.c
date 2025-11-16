// 函数: sub_6d50f0
// 地址: 0x6d50f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax
void* edx
eax, edx = sub_6d4e40(arg1, arg2, arg3, arg4[1])

if (eax != 0)
    return eax

void* ecx = arg3 + 0xbc
*(arg3 + 0x84) = *arg4
int32_t edi_1 = arg4[1]
void* var_8_1 = ecx
*(arg3 + 0x88) = 0
*(arg3 + 0x90) = &arg4[3]
*(arg3 + 0x94) = 0x400
int32_t ebx_1 = 0x400

while (true)
    int32_t eax_3 = 0xffffffff
    
    if (edi_1 u< 0xffffffff)
        eax_3 = edi_1
    
    edi_1 -= eax_3
    *(arg3 + 0x88) = eax_3
    
    if (*(arg3 + 0x94) == 0)
        if (arg5 + ebx_1 u> 0x7fffffff)
            edx = 0xfffffffc
            break
        
        void* ecx_1 = *ecx
        
        if (ecx_1 == 0)
            uint32_t ecx_3 = *(arg3 + 0xc0) + 4
            
            if (ecx_3 - 1 u> 0xfffffffe)
                edx = 0xfffffffc
                break
                break
            
            int32_t eax_7 = *(arg3 + 0x254)
            void* eax_8
            
            if (eax_7 == 0)
                eax_8, edx = _malloc(ecx_3)
            else
                eax_8, edx = eax_7(arg3, ecx_3)
            
            ecx_1 = eax_8
            
            if (ecx_1 == 0)
                edx = 0xfffffffc
                break
                break
            
            *ecx_1 = 0
            *var_8_1 = ecx_1
        
        var_8_1 = ecx_1
        *(arg3 + 0x90) = ecx_1 + 4
        int32_t eax_11 = *(arg3 + 0xc0)
        ebx_1 += eax_11
        *(arg3 + 0x94) = eax_11
    
    void* eax_12 = sub_722b90(arg3 + 0x84, (sbb.d(edx, edx, 0 u< edi_1) & 0xfffffffc) + 4)
    edi_1 += *(arg3 + 0x88)
    edx = eax_12
    *(arg3 + 0x88) = 0
    
    if (edx != 0)
        break
    
    ecx = var_8_1

int32_t ebx_2 = ebx_1 - *(arg3 + 0x94)
int32_t* ecx_5 = arg4
*(arg3 + 0x94) = 0
ecx_5[2] = ebx_2

if (arg5 + ebx_2 u< 0x7fffffff)
    sub_6cb6b0(arg3, edx)
    ecx_5 = arg4
else
    *(arg3 + 0x9c) = "compressed data too long"
    edx = 0xfffffffc

*(arg3 + 0x80) = 0

if (edx != 1 || edi_1 != 0)
    return edx

sub_6d4dc0(&arg4[3], ecx_5[1])
return 0
