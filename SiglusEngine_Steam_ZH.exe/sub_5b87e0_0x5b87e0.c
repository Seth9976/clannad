// 函数: sub_5b87e0
// 地址: 0x5b87e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bab18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_78
int16_t var_48
sub_60eaf0(&var_78, 
    sub_532b80(&ExceptionList, arg2, &var_48, 
        &C_tnm_user_call_prop_list::`vftable'{for `C_elm_list<class C_elm_user_call_prop>'}.
            vFunc_4))
var_8_1.b = 2
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48.d)

int32_t var_34_1 = 7
int32_t var_38 = 0
var_48 = 0
int32_t var_68
void** ebx
int32_t var_60
int32_t var_4c
int16_t var_30
int32_t var_1c

if (var_68 != 0)
    int32_t* var_3c = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_2 = 0
    var_8_1.b = 5
    struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = sub_6b7be0(&var_78, &var_3c)
    int32_t* edi_1 = var_3c
    int16_t* eax_9
    
    if (eax_7.b != 0)
        int32_t* eax_10 = edi_1
        
        if (edi_1 == var_38_1)
            eax_10 = nullptr
        
        *(arg1 + 0xa0) = *eax_10
        int32_t* ecx_9 = edi_1
        
        if (edi_1 == var_38_1)
            ecx_9 = nullptr
        
        int32_t* eax_13 = sub_5b8610(arg1 + 0xa4, var_38_1 - edi_1 - 4, &ecx_9[1], arg1 + 0xa4)
        
        if (eax_13.b == 0)
            int16_t* eax_14 = sub_548cb0(eax_13, 0xaf1b5c, &var_60, arg2)
            var_8_1.b = 8
            eax_9 = sub_532b80(eax_14, eax_14, &var_30, 0xaf1b88)
            var_8_1.b = 9
            goto label_5b8998
        
        void* const edx_9 = *(arg1 + 0xa4)
        
        if (edx_9 == *(arg1 + 0xa8))
            edx_9 = nullptr
        
        *(arg1 + 0xb0) = *(edx_9 + 4)
        *(arg1 + 0xb4) = *(edx_9 + 8)
        void* const ecx_14 = *(arg1 + 0xa4)
        
        if (ecx_14 == *(arg1 + 0xa8))
            ecx_14 = nullptr
        
        *(arg1 + 0xb8) = *(edx_9 + 0xc) + ecx_14
        void* const ecx_15 = *(arg1 + 0xa4)
        
        if (ecx_15 == *(arg1 + 0xa8))
            ecx_15 = nullptr
        
        *(arg1 + 0xbc) = *(edx_9 + 0x10) + ecx_15
        void* const ecx_16 = *(arg1 + 0xa4)
        
        if (ecx_16 == *(arg1 + 0xa8))
            ecx_16 = nullptr
        
        *(arg1 + 0xc0) = *(edx_9 + 0x14) + ecx_16
        void* const ecx_17 = *(arg1 + 0xa4)
        ebx.b = 1
        
        if (ecx_17 == *(arg1 + 0xa8))
            ecx_17 = nullptr
        
        *(arg1 + 0xc4) = *(edx_9 + 0x18) + ecx_17
    else
        void** eax_8 = sub_548cb0(eax_7, 0xaf1b5c, &var_60, arg2)
        var_8_1.b = 6
        eax_9 = sub_532b80(eax_8, eax_8, &var_30, &data_af1b6c)
        var_8_1.b = 7
    label_5b8998:
        sub_684160(data_bac424, 9, eax_9)
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        var_30 = 0
        int32_t var_20_2 = 0
        
        if (var_4c u>= 8)
            j__free(var_60)
        
        ebx.b = 0
    
    if (edi_1 != 0)
        j__free(edi_1)
else
    int16_t* eax_5 = sub_548cb0(0, 0xaf1b5c, &var_60, arg2)
    var_8_1.b = 3
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_30, &data_af1b40)
    var_8_1.b = 4
    sub_684160(data_bac424, 9, eax_6)
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    
    if (var_4c u>= 8)
        j__free(var_60)
    
    ebx.b = 0
int32_t var_64

if (var_64 u>= 8)
    j__free(var_78)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
