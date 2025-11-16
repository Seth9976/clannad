// 函数: sub_49da23
// 地址: 0x49da23
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
arg1.w = *(ebx[6] + 8)
uint32_t eax_1 = zx.d(arg1.w)

if (arg2 u>= eax_1)
    return nullptr

if (arg1.w == 1)
    return ebx

int32_t edi
int32_t var_28_1 = edi
int32_t* eax_2

if (ebx[0xf] != 0)
label_49da94:
    int32_t** eax_7 = arg2 << 2
    
    if (*(eax_7 + ebx[0xf]) != 0)
        eax_2 = *(eax_7 + ebx[0xf])
    else
        uint32_t edx
        
        if (ebx[0x10] != 0)
        label_49dad1:
            int16_t eax_10 = ebx[0xb].w * arg2.w
            edx.w = ebx[0xb].w
            void var_1c
            __builtin_memcpy(&var_1c, &ebx[1], 0x14)
            int16_t ecx_8 = *(ebx + 0xa)
            int16_t var_14_1 = edx.w
            int16_t eax_11 = eax_10 + ecx_8
            int16_t var_16_1 = eax_11
            uint32_t eax_14 = zx.d(ecx_8) + zx.d(ebx[3].w) - zx.d(eax_11)
            
            if (zx.d(edx.w) s> eax_14)
                if (eax_14 s>= 0)
                    int16_t var_14_3 = eax_14.w
                else
                    int16_t var_14_2 = 0
            
            eax_14.w = ebx[2].w
            int32_t ecx_10 = ebx[5]
            int16_t temp1_1 = eax_14.w
            eax_14.w = neg.w(eax_14.w)
            
            if (ecx_10 != 0)
                int32_t var_c_1 = ecx_10
                    + ((ebx[0xb] * ((sbb.d(eax_14, eax_14, temp1_1 != 0) & 3) + 1) * arg2) << 2)
            
            int32_t esi_9 =
                ebx[8] + ((ebx[0xb] * ((sbb.d(eax_14, eax_14, temp1_1 != 0) & 3) + 1) * arg2) << 2)
            int32_t* eax_19 = sub_745f3f(0x44)
            void* const eax_20
            
            if (eax_19 == 0)
                eax_20 = nullptr
            else
                eax_20 = sub_49ab59(eax_19, *ebx, &var_1c, ebx[0x10], ebx[7], esi_9)
            
            *(eax_7 + ebx[0xf]) = eax_20
            
            if (eax_20 == 0)
                eax_2 = nullptr
            else if (sub_49d8ad(*(eax_7 + ebx[0xf])) s>= 0)
                eax_2 = *(eax_7 + ebx[0xf])
            else
                void* ecx_19 = *(eax_7 + ebx[0xf])
                
                if (ecx_19 != 0)
                    sub_49b113(ecx_19, 1)
                
                *(eax_7 + ebx[0xf]) = 0
                eax_2 = nullptr
        else
            int32_t* eax_8
            eax_8, edx = sub_745f3f(0x10)
            ebx[0x10] = eax_8
            
            if (eax_8 != 0)
                int32_t* esi_1 = ebx[6]
                *eax_8 = *esi_1
                void* edi_4 = &eax_8[1]
                void* esi_2 = &esi_1[1]
                *edi_4 = *esi_2
                void* edi_5 = edi_4 + 4
                void* esi_3 = esi_2 + 4
                *edi_5 = *esi_3
                *(edi_5 + 4) = *(esi_3 + 4)
                *(ebx[0x10] + 8) = 1
                goto label_49dad1
            
            eax_2 = nullptr
else
    int32_t eax_4 = sub_745f3f(eax_1 << 2)
    ebx[0xf] = eax_4
    
    if (eax_4 != 0)
        uint32_t ecx_2 = zx.d(*(ebx[6] + 8)) << 2
        __builtin_memset(__builtin_memset(eax_4, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
        goto label_49da94
    
    eax_2 = nullptr

return eax_2
