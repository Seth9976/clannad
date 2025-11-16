// 函数: sub_6df670
// 地址: 0x6df670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cca38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x120) == 0 || *(arg1 + 4) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t esi = 0xff
int32_t i_1 = 8
void* edi = arg1 + 0x70
int32_t i

do
    if (*(edi - 0xc) == 0)
        esi = *(edi - 0x10) * esi s/ 0xff
    else
        uint32_t eax_4 = GetTickCount()
        uint32_t ebx_1 = *(edi - 4)
        int32_t eax_5 = *(edi + 4)
        uint32_t edx_1 = *(edi - 8)
        uint32_t eax_6 = eax_4
        int32_t edx_2
        
        if (edx_1 != ebx_1)
            if (edx_1 s>= ebx_1)
                if (edx_1 s> ebx_1)
                    if (eax_4 s< ebx_1)
                        eax_6 = ebx_1
                    else if (eax_4 s> edx_1)
                        eax_6 = edx_1
            else if (eax_4 s< edx_1)
                eax_6 = edx_1
            else if (eax_4 s> ebx_1)
                eax_6 = ebx_1
            
            edx_2 = divs.dp.d(sx.q((eax_6 - edx_1) * (eax_5 - *edi)), ebx_1 - edx_1) + *edi
        else
            edx_2 = eax_5
        
        esi = edx_2 * esi s/ 0xff
        
        if (eax_4 - ebx_1 s>= 0)
            *(edi - 0xc) = 0
    
    edi += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)

if (*(arg1 + 0x3a) != 0)
    uint32_t eax_12 = GetTickCount()
    int32_t edi_1 = *(arg1 + 0x40)
    int32_t ecx_9 = eax_12 - *(arg1 + 0x3c)
    int32_t ecx_10
    
    if (edi_1 != 0)
        if (edi_1 s<= 0)
            if (edi_1 s< 0)
                if (ecx_9 s< edi_1)
                    ecx_9 = edi_1
                else if (ecx_9 s> 0)
                    ecx_9 = 0
        else if (ecx_9 s< 0)
            ecx_9 = 0
        else if (ecx_9 s> edi_1)
            ecx_9 = edi_1
        
        ecx_10 = divs.dp.d(sx.q((0xff - *(arg1 + 0x44)) * ecx_9), edi_1) + *(arg1 + 0x44)
    else
        ecx_10 = 0xff
    
    *(arg1 + 0x48) = ecx_10
    
    if (ecx_10 s< 0)
        ecx_10 = 0
    else if (ecx_10 s> 0xff)
        ecx_10 = 0xff
    
    esi = ecx_10 * esi s/ 0xff
    *(arg1 + 0x3c)
    
    if (eax_12 - edi_1 - *(arg1 + 0x3c) s>= 0)
        *(arg1 + 0x3a) = 0

uint32_t var_20

if (*(arg1 + 0x4c) != 0)
    uint32_t eax_20 = GetTickCount()
    int32_t edi_2 = *(arg1 + 0x54)
    int32_t ecx_13 = *(arg1 + 0x58)
    int32_t eax_21 = eax_20 - *(arg1 + 0x50)
    int32_t ecx_14
    
    if (edi_2 != 0)
        if (edi_2 s<= 0)
            if (edi_2 s< 0)
                if (eax_21 s< edi_2)
                    eax_21 = edi_2
                else if (eax_21 s> 0)
                    eax_21 = 0
        else if (eax_21 s< 0)
            eax_21 = 0
        else if (eax_21 s> edi_2)
            eax_21 = edi_2
        
        ecx_14 = ecx_13 - divs.dp.d(sx.q(eax_21 * ecx_13), edi_2)
    else
        ecx_14 = 0
    
    *(arg1 + 0x5c) = ecx_14
    
    if (ecx_14 s< 0)
        ecx_14 = 0
    else if (ecx_14 s> 0xff)
        ecx_14 = 0xff
    
    esi = ecx_14 * esi s/ 0xff
    *(arg1 + 0x50)
    
    if (eax_20 - edi_2 - *(arg1 + 0x50) s>= 0)
        bool cond:5_1 = *(arg1 + 0x4d) == 0
        *(arg1 + 0x4c) = 0
        
        if (cond:5_1)
            sub_6de780(arg1)
        else
            var_20 = 0
            int32_t var_c_1 = 0
            
            if (*(arg1 + 0x120) != 0)
                int32_t* ecx_16 = *(arg1 + 4)
                
                if (ecx_16 != 0)
                    (*(*ecx_16 + 0x48))(ecx_16)
            
            int32_t var_c_2 = 0xffffffff

void* eax_11
int32_t ecx_18

if (esi s< 0)
    ecx_18 = 0xffffd8f0
else if (esi s<= 0xff)
    if (esi != 0)
        goto label_6df91d
    
    ecx_18 = 0xffffd8f0
else
    esi = 0xff
label_6df91d:
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    int64_t xmm0_4
    x87control_1, xmm0_4 =
        __libm_sse2_log_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(esi)) / 255.0)
    var_20.q = xmm0_4
    double xmm0_6
    eax_11, xmm0_6 = __libm_sse2_log_precise(mxcsr, x87control_1, 0x4024000000000000)
    ecx_18 = int.d(var_20.q / _mm_cvtps_pd(fconvert.s(xmm0_6)) * 5000.0)
    
    if (ecx_18 s< 0xffffd8f0)
        ecx_18 = 0xffffd8f0
    else if (ecx_18 s> 0)
        ecx_18 = 0

int32_t* edx_22 = *(arg1 + 4)

if (edx_22 != 0)
    (*(*edx_22 + 0x3c))(edx_22, ecx_18)

eax_11.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
