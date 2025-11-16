// 函数: sub_6d1d50
// 地址: 0x6d1d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
char* eax = nullptr
void* var_14 = esi
char* var_c = nullptr
arg3.b = arg2[2].b

if ((arg3.b & 1) != 0 || (arg3.b & 2) == 0)
    return eax

uint32_t edx = zx.d(*(esi + 0x242))
uint32_t ebx_1 = zx.d(*(esi + 0x244))
int32_t ecx_1 = 0x8000 - ebx_1 - edx
uint32_t var_1c_1 = ebx_1
uint32_t i_9 = *arg2
int32_t edi_3 = zx.d(arg3.b) u>> 2 & 1
uint32_t i_8 = i_9
char* ebx_2

if (*(arg2 + 9) != 8)
    char* var_3c_1
    
    if (*(esi + 0x19c) != 0)
        eax = *(esi + 0x198)
        var_3c_1 = eax
    
    if (*(esi + 0x19c) == 0 || eax == 0)
        eax = arg4
        ebx_2 = nullptr
        void* edi_6 = eax
        
        if (i_9 != 0)
            uint32_t i_5 = i_9
            uint32_t i
            
            do
                i_9.b = eax[5]
                uint16_t esi_4 = zx.w(*eax) << 8 | zx.w(eax[1])
                uint16_t esi_5 = zx.w(eax[2]) << 8 | zx.w(eax[3])
                uint16_t ecx_19
                ecx_19.b = eax[4]
                eax = &eax[6]
                uint32_t ecx_21 = zx.d(zx.w(ecx_19.b) << 8) | zx.d(i_9.b)
                
                if (esi_4 != esi_5 || esi_4 != ecx_21.w)
                    ebx_2 |= 1
                
                i_9 = zx.d(((zx.d(esi_4) * edx + 0x4000 + ecx_21 * ecx_1 + zx.d(esi_5) * var_1c_1)
                    u>> 0xf).w)
                *edi_6 = (i_9 u>> 8).b
                *(edi_6 + 1) = i_9.b
                edi_6 += 2
                
                if (edi_3 != 0)
                    *edi_6 = *eax
                    *(edi_6 + 1) = eax[1]
                    edi_6 += 2
                    eax = &eax[2]
                
                i = i_5
                i_5 -= 1
            while (i != 1)
            i_9 = i_8
    else
        void* edi_5 = arg4
        void* ebx_3 = edi_5
        void* var_24_1 = ebx_3
        
        if (i_9 == 0)
            ebx_2 = nullptr
        else
            uint32_t i_4 = i_9
            uint32_t i_1
            
            do
                int32_t* ecx_2
                ecx_2.b = *(edi_5 + 5)
                uint16_t edx_4 = zx.w(*edi_5) << 8 | zx.w(*(edi_5 + 1))
                uint16_t edx_5 = zx.w(*(edi_5 + 2)) << 8 | zx.w(*(edi_5 + 3))
                uint16_t eax_19
                eax_19.b = *(edi_5 + 4)
                edi_5 += 6
                uint32_t ecx_12 = zx.d(zx.w(eax_19.b) << 8) | zx.d(ecx_2.b)
                
                if (edx_4 != edx_5 || edx_4 != ecx_12.w)
                    uint32_t edx_10 = zx.d(edx_5)
                    char ecx_15 = (*(esi + 0x180)).b
                    int32_t esi_3 = *(esi + 0x19c)
                    int32_t edx_14 =
                        zx.d(*(*(esi_3 + (zx.d(edx_10.b) u>> ecx_15 << 2)) + (edx_10 u>> 8 << 1)))
                        * var_1c_1 +
                        zx.d(*(*(esi_3 + (zx.d(ecx_12.b) u>> ecx_15 << 2)) + (ecx_12 u>> 8 << 1)))
                        * ecx_1
                    uint32_t ebx_6 = zx.d(edx_4)
                    esi = var_14
                    ebx_3 = var_24_1
                    uint32_t edx_16 = zx.d(((
                        zx.d(*(*(esi_3 + (zx.d(ebx_6.b) u>> ecx_15 << 2)) + (ebx_6 u>> 8 << 1)))
                        * edx + edx_14 + 0x4000) u>> 0xf).w)
                    var_c |= 1
                    ecx_2 = zx.d(
                        *(*(var_3c_1 + (zx.d(edx_16.b) u>> ecx_15 << 2)) + (edx_16 u>> 8 << 1)))
                else if (*(esi + 0x18c) == 0)
                    ecx_2 = zx.d(edx_4)
                else
                    int32_t ecx_13
                    ecx_13.b = *(esi + 0x180)
                    uint32_t edx_8 = zx.d(edx_4)
                    ecx_2 = zx.d(*(*(*(esi + 0x18c) + (zx.d(edx_8.b) u>> ecx_13.b << 2))
                        + (edx_8 u>> 8 << 1)))
                
                *ebx_3 = (ecx_2 u>> 8).b
                *(ebx_3 + 1) = ecx_2.b
                ebx_3 += 2
                var_24_1 = ebx_3
                
                if (edi_3 != 0)
                    *ebx_3 = *edi_5
                    *(ebx_3 + 1) = *(edi_5 + 1)
                    ebx_3 += 2
                    var_24_1 = ebx_3
                    edi_5 += 2
                
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            ebx_2 = var_c
            i_9 = i_8
else
    int32_t ecx_3 = *(esi + 0x190)
    
    if (ecx_3 == 0 || *(esi + 0x194) == 0)
        char* edx_3 = arg4
        char* esi_2 = edx_3
        
        if (i_8 == 0)
            i_9 = i_8
            ebx_2 = nullptr
        else
            uint32_t i_6 = i_8
            uint32_t i_2
            
            do
                ebx_1.b = *edx_3
                ebx_1:1.b = edx_3[1]
                uint32_t ecx_7
                ecx_7.b = edx_3[2]
                edx_3 = &edx_3[3]
                
                if (ebx_1.b != ebx_1:1.b || ebx_1.b != ecx_7.b)
                    var_c = eax | 1
                    *esi_2 = ((zx.d(ecx_7.b) * ecx_1 + zx.d(ebx_1:1.b) * var_1c_1
                        + zx.d(ebx_1.b) * edx) u>> 0xf).b
                else
                    *esi_2 = ebx_1.b
                
                esi_2 = &esi_2[1]
                
                if (edi_3 != 0)
                    eax.b = *edx_3
                    *esi_2 = eax.b
                    esi_2 = &esi_2[1]
                    edx_3 = &edx_3[1]
                
                i_2 = i_6
                i_6 -= 1
                eax = var_c
            while (i_2 != 1)
            i_9 = i_8
            ebx_2 = eax
    else
        char* esi_1 = arg4
        char* edi_4 = esi_1
        
        if (i_9 == 0)
            ebx_2 = nullptr
        else
            void* ecx_4 = var_14
            uint32_t i_7 = i_9
            uint32_t i_3
            
            do
                ebx_1.b = *esi_1
                ebx_1:1.b = esi_1[1]
                i_9.b = esi_1[2]
                esi_1 = &esi_1[3]
                
                if (ebx_1.b != ebx_1:1.b || ebx_1.b != i_9.b)
                    var_c = eax | 1
                    int32_t ecx_5 = *(var_14 + 0x194)
                    eax = (zx.d(*(zx.d(ebx_1.b) + ecx_5)) * edx + 0x4000
                        + zx.d(*(zx.d(i_9.b) + ecx_5)) * ecx_1
                        + zx.d(*(zx.d(ebx_1:1.b) + ecx_5)) * var_1c_1) u>> 0xf
                    eax.b = eax[ecx_3]
                    ecx_4 = var_14
                    *edi_4 = eax.b
                else
                    i_9 = *(ecx_4 + 0x188)
                    
                    if (i_9 != 0)
                        ebx_1.b = zx.d(ebx_1.b)[i_9]
                    
                    *edi_4 = ebx_1.b
                
                edi_4 = &edi_4[1]
                
                if (edi_3 != 0)
                    eax.b = *esi_1
                    *edi_4 = eax.b
                    edi_4 = &edi_4[1]
                    esi_1 = &esi_1[1]
                
                i_3 = i_7
                i_7 -= 1
                eax = var_c
            while (i_3 != 1)
            i_9 = i_8
            ebx_2 = eax

*(arg2 + 0xa) -= 2
eax.b = *(arg2 + 0xa)
eax.w = muls.dp.b(eax.b, *(arg2 + 9))
arg2[2].b &= 0xfd
*(arg2 + 0xb) = eax.b
uint32_t eax_44 = zx.d(eax.b)

if (eax.b u< 8)
    arg2[1] = (eax_44 * i_9 + 7) u>> 3
    return ebx_2

arg2[1] = (eax_44 u>> 3) * i_9
return ebx_2
