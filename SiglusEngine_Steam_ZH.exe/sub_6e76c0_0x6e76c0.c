// 函数: sub_6e76c0
// 地址: 0x6e76c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
int16_t* edi = arg2
void* var_48 = esi
int16_t* var_34 = edi
int32_t eax = *(esi + 0x68)
int32_t eax_1 = *(esi + 0xd0)
int32_t ebx = *(esi + 0xd138)
int32_t var_8 = ebx
int32_t* ecx_1 = &edi[(arg4 + 0x2c0) * 2]
int32_t ecx_2 = *ecx_1
int32_t ecx_3 = *(edi + (arg4 << 2) + 0xb18)
void* ecx_6 = &edi[(arg4 + 2) * 0x80]
void* edx_2 = &edi[(arg4 + 8) * 0x80]
void* var_c = edx_2
int32_t ecx_8 = arg4 * 6
int16_t var_14 = **(edi + (ecx_8 << 2) + 0xb30)
int32_t ecx_9 = 0
int32_t var_18 = 0
int16_t var_12 = **(edi + (ecx_8 << 2) + 0xb34)
int32_t eax_7 = ecx_3

if (eax_7 s> 0)
    do
        int32_t eax_11 = *(ecx_2 + (ecx_9 << 2))
        int32_t* eax_12 = eax_1 + (eax_11 << 2)
        int32_t ecx_11 = *eax_12
        int32_t eax_15
        eax_15.b = (ecx_11 & 0x700) != 0x100
        void* i = nullptr
        int32_t eax_17 =
            *(edi + ((eax_15 + (((ecx_11 u>> 2 & 0x3f) + arg4 * 3) << 1)) << 2) + 0xb30)
        void* i_1
        
        do
            i_1 = i
            
            if (*(edx_2 + (i << 2)) != 0)
                *(edx_2 + (i << 2)) -= 1
                break
            
            void* edx_3 = *(ecx_6 + (i << 2))
            uint32_t edi_1 = zx.d(*(edx_3 + ebx))
            void* edx_4 = edx_3 + 1
            int32_t ebx_1 = *((edi_1 << 2) + &data_adbd70)
            
            if (edi_1 u< 0xf)
                int32_t ecx_15
                ecx_15.b = edi_1 s< 0xc
                int32_t eax_19
                eax_19.b = edi_1 s< 2
                ebx_1 += zx.d(*(edx_4 + var_8))
                    << (((neg.d(ecx_15)).b & 0x15) + ((neg.d(eax_19)).b & 0xf3))
                edx_4 += 1
            
            int32_t eax_27 = ebx_1 s>> 8 & 0xfff
            
            if (edi_1 == 0)
                uint32_t ecx_20 = zx.d(*(edx_4 + var_8))
                edx_4 += 1
                uint32_t ecx_21 = ecx_20 << 8
                int32_t temp0_1 = eax_27
                eax_27 += ecx_21
                
                if (temp0_1 == neg.d(ecx_21))
                    eax_27 = 0x7fffffff
            
            edi = var_34
            *(var_c + (i << 2)) = eax_27
            *(ecx_6 + (i << 2)) = edx_4
            void* esi_1 = i + zx.d(ebx_1.b)
            ebx = var_8
            edi[zx.d(*(esi_1 + eax))] = ((neg.d(ebx_1 & 0x100000) s>> 0x15).w ^ (ebx_1 s>> 0x15).w)
                * *(eax_17 + (esi_1 << 1))
            edx_2 = var_c
            int32_t ecx_28
            ecx_28.b = eax_27 == 0
            i = esi_1 + ecx_28
        while (i s< 0x40)
        
        int32_t* eax_28
        eax_28.w = *(eax_12 + 2)
        *edi = eax_28.w
        esi = var_48
        (*(esi + 0x58))(esi, eax_11, arg4, edi, i_1, zx.d((&var_14)[eax_15]))
        eax_7 = ecx_3
        ecx_9 = var_18 + 1
        edx_2 = var_c
        var_18 = ecx_9
    while (ecx_9 s< eax_7)

int32_t result = eax_7 << 2
*ecx_1 += result
int32_t ecx_31 = *(edi + (arg4 << 2) + 0xb24)

if (ecx_31 s<= 0)
    return result

*(edi + (arg4 << 2) + 0xb0c) += neg.d(ecx_31) << 2
return (*(esi + 0x44))(*(esi + (*(esi + 0x11c) << 2) + 0x24c), 
    *(esi + (*(esi + 0x118) << 2) + 0x24c), *(esi + (arg4 << 2) + 0x264), 
    *(edi + (arg4 << 2) + 0xb0c), ecx_31, *(esi + 0xd4))
