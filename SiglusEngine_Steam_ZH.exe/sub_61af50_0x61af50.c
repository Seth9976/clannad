// 函数: sub_61af50
// 地址: 0x61af50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_9bf9c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_bac450
int32_t var_b8
void* esi_1

if (*esi == 0x385)
    if (*(arg1 + 0x1bf8) != 0)
        int32_t var_a8 = 0
        int32_t var_a4_1 = 0
        int32_t var_a0_1 = 0
        int32_t var_44_1 = 0
        void* eax_4 = data_bac4a0
        int32_t esi_2 = esi[5]
        int32_t edi = *(eax_4 + 8)
        int32_t ecx = *(eax_4 + 0xc)
        
        if (esi_2 s> 0)
            if (esi_2 s>= 0x40)
                esi_2 = 0x40
            
            edi = divs.dp.d(sx.q(edi), esi_2)
            ecx = divs.dp.d(sx.q(ecx), esi_2)
        
        if (edi s> 0 && ecx s> 0)
            sub_5979b0(&var_a8, (ecx * edi) << 2)
            void* edi_1 = data_bac450
            int32_t eax_11 = var_a8
            void* esi_3 = *(arg1 + 0x1bf8)
            
            if (eax_11 == var_a4_1)
                eax_11 = 0
            
            double xmm0_3 = _mm_cvtepi32_pd(zx.q(*(edi_1 + 0xc)))
            var_b8 = eax_11
            int32_t eax_12 = *(esi_3 + 0x58)
            int32_t eax_13 = *(esi_3 + 0x5c)
            int32_t mxcsr
            int16_t x87control
            double xmm0_5 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_3 / 1000.0)
            bool cond:3_1 = *(edi_1 + 8) != 0
            int64_t xmm0_7 = _mm_cvtepi32_pd(zx.q(arg3))
            double xmm0_11
            
            if (cond:3_1)
                if (0 f<= xmm0_7)
                    int64_t xmm3_2 = 0x40f0000000000000
                    
                    if (not(xmm0_7 f<= xmm3_2))
                        xmm0_7 = xmm3_2
                else
                    xmm0_7 = (zx.o(0)).q
                
                xmm0_11 = (xmm0_7 f- 0.0) * (0.0 - xmm0_5) * 1.52587890625e-05 + xmm0_5
            else
                if (0 f<= xmm0_7)
                    int64_t xmm3_1 = 0x40f0000000000000
                    
                    if (not(xmm0_7 f<= xmm3_1))
                        xmm0_7 = xmm3_1
                else
                    xmm0_7 = (zx.o(0)).q
                
                xmm0_11 = (xmm0_7 f- 0.0) * (xmm0_5 - 0.0) * 1.52587890625e-05 + 0.0
            
            int32_t eax_14 = *(edi_1 + 0x10) * 0xe10
            int32_t var_108_2 = eax_14
            int32_t var_10c_1 = 0x10000
            int32_t var_110_1 = 0
            int32_t eax_15 = sub_5b08c0(eax_14, 0, arg3)
            int32_t ecx_5
            
            if (*(esi_3 + 0x34) == 0)
                ecx_5 = *(esi_3 + 0x38)
                
                if (ecx_5 == *(esi_3 + 0x3c))
                    ecx_5 = 0
            else
                ecx_5 = *(esi_3 + 0x44)
            
            uint128_t xmm0_16 = zx.o(xmm0_11 * xmm0_11)
            int32_t var_114_1 = _mm_unpacklo_pd(xmm0_16, xmm0_16)
            int32_t eax_17
            int32_t edx_5
            edx_5:eax_17 = sx.q(ecx)
            int32_t eax_22
            int32_t edx_6
            edx_6:eax_22 = sx.q(edi)
            int32_t eax_27
            int32_t edx_7
            edx_7:eax_27 = sx.q(eax_13)
            int32_t eax_32
            int32_t edx_8
            edx_8:eax_32 = sx.q(eax_12)
            void var_118
            sub_64be20(((eax_32 - edx_8) s>> 1) - 1, edi, var_b8, ecx, ecx_5, eax_12, eax_13, 
                ((eax_32 - edx_8) s>> 1) - 1, ((eax_27 - edx_7) s>> 1) - 1, 
                ((eax_22 - edx_6) s>> 1) - 1, ((eax_17 - edx_5) s>> 1) - 1, eax_15, var_118, 0)
            void* ecx_7 = data_bac4a0
            int32_t edx_10 = *(ecx_7 + 8)
            
            if (edi == edx_10 && ecx == *(ecx_7 + 0xc))
                sub_64d840(arg1 + 0x1bf0, &var_a8)
            else if (*(data_bac450 + 0x18) != 0)
                int32_t var_94 = 0
                int32_t var_90_1 = 0
                int32_t var_8c_1 = 0
                var_44_1.b = 1
                sub_649f20(&var_a8, edi, &var_94, ecx, &var_a8)
                void* edx_13 = data_bac4a0
                sub_64d980(&var_94, *(edx_13 + 8), arg1 + 0x1bf0, *(edx_13 + 0xc), &var_94)
                sub_538150(&var_94)
            else
                sub_64d980(&var_a8, edx_10, arg1 + 0x1bf0, *(ecx_7 + 0xc), &var_a8)
            
            int32_t eax_40 = var_a8
            
            if (eax_40 != 0)
                j__free(eax_40)
    
    esi_1 = arg2
    *(esi_1 + 0x100) = 0x3f800000
    *(esi_1 + 0x104) = 0x3f800000
    *(esi_1 + 0x108) = 0x3f800000
    *(esi_1 + 0x10c) = 0x3f000000
else
    int32_t eax_3 = esi[2]
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg3)) * 1.52587891e-05f
    int32_t xmm0_1
    
    switch (eax_3)
        case 0
            xmm0_1 = (zx.o(0)).d
        case 1
            xmm0_1 = 0x3f000000
        case 2
            xmm0_1 = 0x3f400000
        case 3
            xmm0_1 = 0x3f600000
        case 4
            xmm0_1 = 0x3f700000
        case 5
            xmm0_1 = 0x3f780000
        case 6
            xmm0_1 = 0x3f7c0000
        case 7
            xmm0_1 = 0x3f7e0000
        default
            xmm0_1 = 0x3f800000
    
    esi_1 = arg2
    *(esi_1 + 0x100) = xmm0_1
    *(esi_1 + 0x104) = xmm0_1
    *(esi_1 + 0x108) = xmm0_1
    *(esi_1 + 0x10c) = xmm1_3

int32_t* edi_3 = *(arg1 + 0x1bf4)
var_b8 = *(arg1 + 0x1bf0)
int32_t* var_b4 = edi_3

if (edi_3 != 0)
    edi_3[1]
    edi_3[1] += 1

int32_t var_44_2 = 2
sub_5b17d0(esi_1 + 0xe0, &var_b8)
int32_t var_44_3 = 0xffffffff

if (edi_3 != 0)
    bool cond:0_1 = edi_3[1] != 1
    edi_3[1]
    edi_3[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_3 + 4))(eax_2)
        bool cond:1_1 = edi_3[2] != 1
        edi_3[2]
        edi_3[2] -= 1
        
        if (not(cond:1_1))
            (*(*edi_3 + 8))()

int32_t result = *(arg1 + 0x192c)
*(esi_1 + 0xfc) = result
*(esi_1 + 0x18) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
