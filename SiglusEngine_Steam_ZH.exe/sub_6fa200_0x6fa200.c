// 函数: sub_6fa200
// 地址: 0x6fa200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdf59
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t esi = arg2
int32_t var_80 = 0
int32_t var_7c = esi
int32_t* edi = *(arg1[5] + 0x98)
int32_t var_74 = 0
int32_t edi_1 = 0

while (true)
    void var_54
    int32_t* eax_7 = sub_6f12f0(esi, &var_54, edi_1)
    int32_t var_c_1 = 0
    ebx |= 1
    char var_81_1
    int32_t* eax_9
    
    if (*eax_7 != 0)
        ebx |= 2
        var_81_1 = 1
        void var_64
        eax_9 = *sub_6f12f0(esi, &var_64, edi_1)
    
    if (*eax_7 == 0 || *eax_9 == 0)
        var_81_1 = 0
    
    if ((ebx.b & 2) != 0)
        ebx &= 0xfffffffd
        int32_t var_80_1 = ebx
        int32_t* var_60
        
        if (var_60 != 0)
            bool cond:0_1 = var_60[1] != 1
            var_60[1] -= 1
            
            if (not(cond:0_1))
                (*(*var_60 + 4))(eax_4)
                bool cond:3_1 = var_60[2] != 1
                var_60[2] -= 1
                
                if (not(cond:3_1))
                    (*(*var_60 + 8))()
    
    int32_t var_c_2 = 0xffffffff
    
    if ((ebx.b & 1) != 0)
        ebx &= 0xfffffffe
        int32_t* var_50
        
        if (var_50 != 0)
            bool cond:2_1 = var_50[1] != 1
            var_50[1]
            var_50[1] -= 1
            
            if (not(cond:2_1))
                (*(*var_50 + 4))(eax_4)
                bool cond:5_1 = var_50[2] != 1
                var_50[2]
                var_50[2] -= 1
                
                if (not(cond:5_1))
                    (*(*var_50 + 8))()
    
    int32_t esi_7
    
    if (var_81_1 != 0)
        int32_t var_98_3 = edi_1
        void* const var_b4_1 = 7
        int32_t var_9c_3 = 7
        int32_t var_a0_1 = 0
        int32_t* var_b8_1 = u"Tex%02d"
        int16_t var_b0 = 0
        sub_52e720(&var_b0, var_b8_1, var_b4_1)
        int32_t var_4c
        sub_6ae4c0(&var_4c, var_b0)
        int32_t var_c_3 = 1
        void var_5c
        int32_t* eax_18 = sub_6f12f0(var_7c, &var_5c, edi_1)
        var_c_3.b = 2
        char var_34
        char* edx_1 = sub_6af1a0(&var_34)
        var_c_3.b = 3
        
        if (*(edx_1 + 0x14) u>= 0x10)
            edx_1 = *edx_1
        
        int32_t eax_21 = (*(*edi + 0xd0))(edi, edx_1, **eax_18)
        int32_t var_20
        
        if (var_20 u>= 0x10)
            j__free(var_34.d)
        
        var_c_3.b = 1
        var_20 = 0xf
        int32_t var_24_1 = 0
        var_34 = 0
        int32_t* var_58
        
        if (var_58 != 0)
            bool cond:6_1 = var_58[1] != 1
            var_58[1]
            var_58[1] -= 1
            
            if (not(cond:6_1))
                (*(*var_58 + 4))(eax_4)
                bool cond:8_1 = var_58[2] != 1
                var_58[2]
                var_58[2] -= 1
                
                if (not(cond:8_1))
                    (*(*var_58 + 8))()
        
        int32_t var_38
        
        if (eax_21 s>= 0)
            esi_7 = edi_1 + 1
            int32_t var_c_4 = 0xffffffff
            var_74 = esi_7
            
            if (var_38 u>= 8)
                j__free(var_4c)
            
            var_38 = 7
            int32_t var_3c_1 = 0
            var_4c.w = 0
            goto label_6fa46a
        
        int16_t var_ac
        int16_t* var_70_1 = &var_ac
        var_b0.d = 0xa
        int32_t var_98_8 = 7
        int32_t var_9c_6 = 0
        int32_t* var_b4_3 = u"SetTexture"
        var_ac = 0
        sub_52e720(&var_ac, var_b4_3, var_b0)
        var_c_3.b = 4
        var_b0.d = 7
        int32_t var_b4_4 = 0
        int16_t var_c4 = 0
        int32_t* eax_26
        int32_t edx_2
        eax_26, edx_2 = sub_52e720(&var_c4, &data_b07d94, 0x16)
        var_c_3.b = 1
        sub_6f1ae0(eax_26, edx_2, eax_21, var_c4)
        
        if (var_38 u>= 8)
            j__free(var_4c)
        
        goto label_6fa4f6
    
    esi_7 = var_74
label_6fa46a:
    edi_1 += 1
    
    if (edi_1 s>= 4)
        int32_t** result
        
        if ((*(*arg1 + 0x20))(var_7c, arg3, 0, esi_7, edi).b == 0)
        label_6fa4f6:
            result.b = 0
        else
            *arg4 = edi
            result.b = 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_745f2b(eax_2 ^ &var_84)
        return result
    
    esi = var_7c
