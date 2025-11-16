// 函数: sub_6f2d40
// 地址: 0x6f2d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd5b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** edi = arg1
void*** var_18 = edi
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = *arg2
int32_t esi = arg2[1]

if (eax_3 == esi)
label_6f3085:
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t eax_4 = data_4ecd1f8
int32_t esi_2 = (esi - eax_3) s>> 6

if ((eax_4.b & 1) == 0)
    data_4ecd1fc = 0
    data_4ecd1f8 = eax_4 | 1
    data_4ecd200 = 0
    data_4ecd204 = 0
    _atexit(sub_aa2ad0)

sub_6f3370(edi, 1)
int32_t ebx_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_6

if (esi_2 s> 0)
    do
        int32_t esi_4 = ebx_1 << 6
        eax_6 = *arg2
        
        if (eax_6[ebx_1 * 0x10 + 0xa] != 0)
            if (sub_6b7be0(&eax_6[ebx_1 * 0x10 + 6], &data_4ecd1fc).b == 0)
                goto label_6f3085
            
            void* var_38_1 = nullptr
            struct _EXCEPTION_REGISTRATION_RECORD** var_34_1 = nullptr
            int32_t var_30_1 = 0
            uint32_t var_3c = 0
            int32_t var_8_4 = 2
            void* ecx_13 = data_4ecd1fc
            void* edx_6 = data_4ecd200 - ecx_13
            
            if (ecx_13 == data_4ecd200)
                ecx_13 = nullptr
            
            char eax_21
            struct _EXCEPTION_REGISTRATION_RECORD** ecx_15
            eax_21, ecx_15 = sub_6dcdb0(&var_3c, ecx_13, edx_6)
            eax_3 = var_34_1
            
            if (eax_21 == 0)
                goto label_6f306b
            
            void* edx_9 = *arg2
            ecx_15 = *(edx_9 + esi_4 + 0x30)
            void* edx_10 = edx_9 + esi_4
            
            if (ecx_15 s< 0)
                ecx_15 = nullptr
            else if (ecx_15 s> (eax_3 - var_38_1) s/ 0x30 - 1)
                ecx_15 = (eax_3 - var_38_1) s/ 0x30 - 1
            
            void* esi_9 = ecx_15 * 0x30 + var_38_1
            
            if (*(esi_9 + 4) s> 0 && *(esi_9 + 8) s> 0)
                if (ebx_1 != 0)
                    eax_6, ecx_15 = sub_6f5270(**var_18, esi_9, *(edx_10 + 0x34), *(edx_10 + 0x38), 
                        *(edx_10 + 0x3c))
                else
                    int32_t* eax_26
                    int32_t* ecx_19
                    eax_26, ecx_19 = sub_745f3f(0x28)
                    void* const eax_27
                    
                    if (eax_26 == 0)
                        eax_27 = nullptr
                    else
                        ecx_19 = eax_26
                        eax_27 = sub_6f3550(ecx_19)
                    
                    void* const var_2c = eax_27
                    int32_t var_28 = 0
                    var_8_4.b = 3
                    int32_t* var_54_3 = &var_28
                    sub_69e2f0(eax_27, eax_27, ecx_19)
                    var_8_4.b = 4
                    sub_54d190(*var_18, &var_2c)
                    var_8_4.b = 2
                    sub_54b010(&var_2c)
                    eax_6, ecx_15 = sub_6f4cd0(**var_18, esi_9, 0)
            
            if (*(esi_9 + 4) s> 0 && *(esi_9 + 8) s> 0 && eax_6.b == 0)
                eax_3 = var_34_1
            label_6f306b:
                
                if (var_38_1 == 0)
                    goto label_6f3085
                
                int32_t* var_54_7 = arg2
                struct _EXCEPTION_REGISTRATION_RECORD** var_58_5 = ecx_15
                sub_6c9040(var_38_1, eax_3)
                j__free(var_38_1)
                goto label_6f3085
            
            int32_t var_8_5 = 0xffffffff
            
            if (var_38_1 != 0)
                int32_t* var_54_6 = arg2
                struct _EXCEPTION_REGISTRATION_RECORD** var_58_4 = ecx_15
                sub_6c9040(var_38_1, var_34_1)
                j__free(var_38_1)
                int32_t var_38_2 = 0
                int32_t var_34_2 = 0
                int32_t var_30_2 = 0
            
            edi = var_18
        else if (ebx_1 == 0)
            int32_t* eax_8
            int32_t* ecx_3
            eax_8, ecx_3 = sub_745f3f(0x28)
            void* const eax_9
            
            if (eax_8 == 0)
                eax_9 = nullptr
            else
                ecx_3 = eax_8
                eax_9 = sub_6f3550(ecx_3)
            
            int32_t* var_20 = nullptr
            int32_t var_8_1 = 0
            int32_t* var_54_1 = &var_20
            sub_69e2f0(eax_9, eax_9, ecx_3)
            int32_t var_8_2 = 1
            void** edx_2 = *edi
            int32_t* ecx_4 = var_20
            var_20 = nullptr
            int32_t var_24_2 = 0
            *edx_2 = eax_9
            int32_t* esi_5 = edx_2[1]
            edx_2[1] = ecx_4
            
            if (esi_5 != 0)
                bool cond:3_1 = esi_5[1] != 1
                esi_5[1] -= 1
                
                if (not(cond:3_1))
                    (*(*esi_5 + 4))(eax_2)
                    bool cond:5_1 = esi_5[2] != 1
                    esi_5[2]
                    esi_5[2] -= 1
                    
                    if (not(cond:5_1))
                        (*(*esi_5 + 8))()
            
            int32_t var_8_3 = 0xffffffff
            int32_t* esi_6 = var_20
            
            if (esi_6 != 0)
                bool cond:4_1 = esi_6[1] != 1
                esi_6[1]
                esi_6[1] -= 1
                
                if (not(cond:4_1))
                    (*(*esi_6 + 4))(eax_2)
                    bool cond:6_1 = esi_6[2] != 1
                    esi_6[2]
                    esi_6[2] -= 1
                    
                    if (not(cond:6_1))
                        (*(*esi_6 + 8))()
            
            void* eax_20 = *arg2
            sub_6f3610(**edi, *(eax_20 + 0x34), *(eax_20 + 0x38), 0, 0x400, 0x15, 1)
        
        ebx_1 += 1
    while (ebx_1 s< esi_2)

eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
