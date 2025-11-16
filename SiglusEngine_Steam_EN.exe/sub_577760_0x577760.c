// 函数: sub_577760
// 地址: 0x577760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 * 0x3920 + 0xf89d98)
int32_t ebx = *(arg1 * 0x3920 + 0xf89d90)
int32_t esi = *(arg1 * 0x3920 + 0xf89d94)
int32_t eax_3 = *(arg1 * 0x3920 + 0xf89d9c)
int32_t ecx_2 = ecx - 1 + ebx
int32_t ecx_3 = *(arg1 * 0x2d0 + 0x8fcd50)
int32_t edi_1 = eax_3 - 1 + esi
bool cond:0 = *(arg1 * 0x2d0 + 0x8fcd58) != 0
*(arg1 * 0x2d0 + 0x8fcd60) = *(arg1 * 0x2d0 + 0x8fcd58)
*(arg1 * 0x2d0 + 0x8fcd64) = *(arg1 * 0x2d0 + 0x8fcd5c)
int32_t eax_6 = *(arg1 * 0x2d0 + 0x8fcd54)
*(arg1 * 0x2d0 + 0x8fcd68) = ecx_3
*(arg1 * 0x2d0 + 0x8fcd6c) = eax_6

if (cond:0)
    int32_t eax_12 = data_1332b60 - ecx_3 - 1
    *(arg1 * 0x2d0 + 0x8fcd78) = eax_12
    *(arg1 * 0x2d0 + 0x8fcd70) = eax_12 - ecx + 1
else
    *(arg1 * 0x2d0 + 0x8fcd70) = ecx_3
    *(arg1 * 0x2d0 + 0x8fcd78) = ecx - 1 + ecx_3

if (*(arg1 * 0x2d0 + 0x8fcd5c) != 0)
    int32_t eax_20 = data_1332b64 - *(arg1 * 0x2d0 + 0x8fcd54) - 1
    *(arg1 * 0x2d0 + 0x8fcd7c) = eax_20
    *(arg1 * 0x2d0 + &data_8fcd74) = eax_20 - eax_3 + 1
else
    int32_t ecx_4 = *(arg1 * 0x2d0 + 0x8fcd54)
    *(arg1 * 0x2d0 + &data_8fcd74) = ecx_4
    *(arg1 * 0x2d0 + 0x8fcd7c) = eax_3 - 1 + ecx_4

int32_t eax_24 = 0
int32_t ecx_5 = 0
int32_t ecx_6
int32_t ecx_7

if (*(arg1 * 0x2d0 + 0x8fcd58) != 0)
    int32_t ecx_8 = *(arg1 * 0x2d0 + 0x8fcd78)
    
    if (*(arg1 * 0x2d0 + 0x8fcd5c) != 0)
        ecx_5 = 0
        
        if (ecx_8 != ecx_2 || *(arg1 * 0x2d0 + 0x8fcd7c) != edi_1)
            if (ebx s< 0)
                goto label_577939
            
            ebx = ecx_2
            
            if (ebx s>= data_1332b60)
                goto label_577939
            
            ecx_7 = *(arg1 * 0x2d0 + 0x8fcd78)
        label_577937:
            ecx_5 = ecx_7 - ebx
        label_577939:
            
            if (esi s>= 0 && edi_1 s< data_1332b64)
                eax_24 = *(arg1 * 0x2d0 + 0x8fcd7c) - edi_1
    else
        ecx_5 = 0
        
        if (ecx_8 != ecx_2 || *(arg1 * 0x2d0 + &data_8fcd74) != esi)
            if (ebx s< 0)
                goto label_5778fd
            
            ebx = ecx_2
            
            if (ebx s>= data_1332b60)
                goto label_5778fd
            
            ecx_6 = *(arg1 * 0x2d0 + 0x8fcd78)
        label_5778fb:
            ecx_5 = ecx_6 - ebx
        label_5778fd:
            
            if (esi s>= 0 && edi_1 s< data_1332b64)
                eax_24 = *(arg1 * 0x2d0 + &data_8fcd74) - esi
else if (*(arg1 * 0x2d0 + 0x8fcd5c) != 0)
    if (*(arg1 * 0x2d0 + 0x8fcd70) != ebx || *(arg1 * 0x2d0 + 0x8fcd7c) != edi_1)
        if (ebx s< 0 || ecx_2 s>= data_1332b60)
            goto label_577939
        
        ecx_7 = *(arg1 * 0x2d0 + 0x8fcd70)
        goto label_577937
else if (*(arg1 * 0x2d0 + 0x8fcd70) != ebx || *(arg1 * 0x2d0 + &data_8fcd74) != esi)
    if (ebx s< 0 || ecx_2 s>= data_1332b60)
        goto label_5778fd
    
    ecx_6 = *(arg1 * 0x2d0 + 0x8fcd70)
    goto label_5778fb
return sub_577180(eax_24, ecx_5, arg1, eax_24, 1)
