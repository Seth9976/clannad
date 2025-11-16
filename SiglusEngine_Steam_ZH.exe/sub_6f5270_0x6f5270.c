// 函数: sub_6f5270
// 地址: 0x6f5270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd7e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
int32_t var_c0 = 0
int32_t* var_c4 = arg1
void* var_9c = esi
int32_t var_a8
char result = sub_6f3b20(arg1, arg1, &var_a8)

if (result != 0)
    int32_t eax_3 = *(esi + 0xc)
    uint128_t xmm1_1 = *(esi + 0x14)
    int32_t eax_4 = *(esi + 0x10)
    int32_t i_2 = (*(esi + 0x28) - *(esi + 0x24)) s>> 5
    int32_t i_1 = i_2
    void var_84
    sub_6c7fd0(&var_84)
    int32_t var_8_1 = 0
    int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 0xc)
    int32_t var_c0_1 = 0
    int32_t xmm0_4 = _mm_bsrli_si128(xmm1_1, 4)
    int32_t ecx_2 = xmm1_1
    sub_6c8170(&var_84, _mm_bsrli_si128(xmm1_1, 8) - ecx_2, xmm0_2 - xmm0_4, &var_84, 0)
    char var_50
    void* var_4c
    int32_t var_48
    void* var_40
    int32_t var_2c
    
    if (i_2 s> 0)
        int32_t ebx_1 = 0
        int32_t i
        
        do
            void* esi_2 = *(esi + 0x24) + ebx_1
            void* edi_3
            
            if (var_50 == 0)
                edi_3 = var_4c
                
                if (edi_3 == var_48)
                    edi_3 = nullptr
            else
                edi_3 = var_40
            
            int32_t var_38
            int32_t var_34
            sub_6dd0a0(esi_2, 
                (*(esi_2 + 8) - xmm0_4) * var_38 + (*(esi_2 + 4) - ecx_2) * var_34 + edi_3, 
                var_2c << 2)
            esi = var_9c
            ebx_1 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* eax_19
    
    if (var_50 == 0)
        eax_19 = var_4c
        
        if (eax_19 == var_48)
            eax_19 = nullptr
    else
        eax_19 = var_40
    
    int32_t eax_21
    int32_t edx_7
    edx_7:eax_21 = sx.q(var_a8)
    int32_t var_a4
    int32_t var_28
    sub_6f4750(eax_21, ((edx_7 & 3) + eax_21) s>> 2, var_a4, arg1[2], eax_19, var_2c, var_28, 
        arg3 + arg1[7] - eax_3 + ecx_2, arg4 + arg1[8] - eax_4 + xmm0_4, arg5)
    int32_t* ebx
    ebx.b = sub_6f3c40(arg1) != 0
    sub_6c8100(&var_84)
    
    if (var_4c != 0)
        j__free(var_4c)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
