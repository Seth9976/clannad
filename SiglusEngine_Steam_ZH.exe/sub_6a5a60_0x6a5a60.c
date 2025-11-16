// 函数: sub_6a5a60
// 地址: 0x6a5a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca2e7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_bc = 0
int32_t var_a8 = 7
int32_t var_ac = 0
sub_52e3c0(&var_bc, data_bac510 + 0x12734, 0, 0xffffffff)
int32_t var_8_1 = 0
void* const ebx

if (var_ac != 0)
    int32_t var_dc_1 = 0
    int64_t var_d4
    __builtin_memset(&var_d4, 0, 0x14)
    var_8_1.b = 2
    int16_t var_a4
    sub_60eaf0(&var_a4, &var_bc)
    var_8_1.b = 3
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 
        &boost::detail::sp_counted_impl_p<struct S_tnm_save_header>::`vftable'{for `boost::detail::sp_counted_base'}
            .vFunc_5, 
        3)
    var_8_1.b = 4
    int32_t var_44
    int16_t* eax_6 = sub_6b4010(&var_2c, &var_a4, &var_44, &var_2c)
    var_8_1.b = 5
    
    if (&var_a4 != eax_6)
        sub_52e3c0(&var_a4, eax_6, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    var_8_1.b = 3
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    void* var_cc
    
    if (sub_6b7be0(&var_a4, &var_cc) != 0)
        void* eax_11 = var_cc
        void* const edi_1 = eax_11
        int32_t var_c8
        
        if (eax_11 == var_c8)
            edi_1 = nullptr
        
        char* var_20
        sub_5b9470(&var_20, sub_71cd20(edi_1 + 0xc, nullptr))
        char* eax_13 = var_20
        char* edx_5 = eax_13
        
        if (eax_13 == var_1c_1)
            edx_5 = nullptr
        
        sub_71cd20(edi_1 + 0xc, edx_5)
        char* edi_2 = var_20
        int16_t* ecx_12 = edi_2
        int32_t var_78_1 = 7
        
        if (edi_2 == var_1c_1)
            ecx_12 = nullptr
        
        int32_t var_7c_1 = 0
        int16_t var_8c = 0
        int32_t eax_14 = 7
        int32_t var_64_1 = 0
        int32_t var_60_1 = 7
        int16_t var_74 = 0
        int32_t i = 0
        var_8_1.b = 0xa
        
        if (*(edi_1 + 8) s> 0)
            int16_t* ecx_13 = ecx_12
            
            do
                void* eax_16 = sub_6a59b0(sub_6a59b0(ecx_13, &var_8c), &var_74)
                sub_6ae600(&var_8c)
                sub_6ae600(&var_74)
                int32_t var_48_1 = 7
                int16_t var_5c = 0
                int32_t var_4c_1 = 0
                sub_52e3c0(&var_5c, &var_8c, 0, 0xffffffff)
                var_8_1.b = 0xb
                var_44.w = 0
                int32_t var_30_1 = 7
                int32_t var_34_1 = 0
                sub_52e3c0(&var_44, &var_74, 0, 0xffffffff)
                var_8_1.b = 0xc
                int32_t* eax_17
                void* ecx_20
                eax_17, ecx_20 = sub_66a910(&var_5c)
                int32_t* var_f8_10 = eax_17
                void* var_fc_1 = &eax_17[4]
                void* var_e4
                sub_66a9a0(arg1, &var_e4, ecx_20)
                var_8_1.b = 0xa
                
                if (var_30_1 u>= 8)
                    j__free(var_44)
                
                int32_t var_30_2 = 7
                int32_t var_34_2 = 0
                var_44.w = 0
                
                if (var_48_1 u>= 8)
                    j__free(var_5c.d)
                
                ecx_13 = eax_16
                i += 1
            while (i s< *(edi_1 + 8))
            
            eax_14 = var_60_1
            edi_2 = var_20
        
        ebx.b = 1
        
        if (eax_14 u>= 8)
            j__free(var_74.d)
        
        int32_t var_60_2 = 7
        int32_t var_64_2 = 0
        var_74 = 0
        
        if (var_78_1 u>= 8)
            j__free(var_8c.d)
        
        int32_t var_78_2 = 7
        int32_t var_7c_2 = 0
        var_8c = 0
        
        if (edi_2 != 0)
            j__free(edi_2)
    else
        int16_t* eax_9 = sub_548cb0(&var_bc, 0xaff4a4, &var_44, &var_bc)
        var_8_1.b = 6
        int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_2c, &data_af1b40)
        var_8_1.b = 7
        sub_684160(data_bac424, 9, eax_10)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        ebx.b = 0
    
    int32_t var_90
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    int32_t var_90_1 = 7
    var_a4 = 0
    void* eax_19 = var_cc
    int32_t var_94_1 = 0
    
    if (eax_19 != 0)
        j__free(eax_19)
    
    var_8_1.b = 0
    sub_6b73d0(nullptr)
else
    ebx.b = 1

if (var_a8 u>= 8)
    j__free(var_bc.d)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
