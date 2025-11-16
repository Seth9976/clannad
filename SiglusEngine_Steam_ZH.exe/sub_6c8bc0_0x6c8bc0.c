// 函数: sub_6c8bc0
// 地址: 0x6c8bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc730
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t ExceptionRecord = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6b7be0(arg2, &var_4c)
void* edx_1 = var_4c
void* __offset(_EXCEPTION_REGISTRATION_RECORD, -0x1) ebx

if (result.b != 0)
    void* var_58_1 = nullptr
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    uint32_t var_5c = 0
    var_8_1.b = 1
    void* ecx_1 = edx_1
    
    if (edx_1 == var_48)
        ecx_1 = nullptr
    
    sub_6dcdb0(&var_5c, ecx_1, var_48 - edx_1)
    void* edi_1 = nullptr
    void* var_40 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t esi_3 = (var_54_1 - var_58_1) s/ 0x30
    var_8_1.b = 2
    int32_t var_18_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_11
    int32_t* var_30
    
    if (esi_3 s<= 0)
    label_6c8dc3:
        var_8_1.b = 5
        ebx = arg1
        void* var_70_6 = arg1
        void* var_34
        int32_t var_74_3 = sub_6c8ef0(&var_34, &var_40)
        struct _EXCEPTION_REGISTRATION_RECORD* edx_8
        edx_8.b = (ebx + 1)->Next:3.b
        edx_8:1.w = (ebx + 1)->Handler.w
        edx_8:3.b = (ebx + 1)->Handler:2.b
        sub_579a70((ebx + 1)->Next, edx_8)
        struct _EXCEPTION_REGISTRATION_RECORD* Next = (ebx + 1)->Next
        (ebx + 1)->Next:3.b = Next.b
        (ebx + 1)->Handler.w = Next:1.w
        (ebx + 1)->Handler:2.b = Next:3.b
        result, ecx_11 = sub_6c8730(ebx, &var_34)
        var_8_1.b = 2
        void* esi_4 = var_34
        
        if (esi_4 != 0)
            void* var_70_8 = arg1
            struct _EXCEPTION_REGISTRATION_RECORD* var_74_4 = ecx_11
            sub_579a70(esi_4, var_30)
            result, ecx_11 = j__free(esi_4)
        
        ebx.b = 1
    else
        void* var_14_1 = var_58_1
        
        while (true)
            int32_t* edi_2 = sub_745f3f(0x2c)
            
            if (edi_2 == 0)
                edi_2 = nullptr
            else
                __builtin_memset(edi_2, 0, 0x2c)
            
            var_30 = edi_2
            int32_t var_2c_1 = 0
            var_8_1.b = 3
            void* var_1c
            int32_t* eax_7 = sub_6c9110(&var_1c, edi_2)
            int32_t* ecx_6 = *eax_7
            *eax_7 = var_2c_1
            ebx = var_1c
            
            if (ebx != 0)
                struct _EXCEPTION_REGISTRATION_RECORD* temp1_1
                temp1_1.b = (ebx + 1)->Next:3.b
                temp1_1:1.w = (ebx + 1)->Handler.w
                temp1_1:3.b = (ebx + 1)->Handler:2.b
                void* __offset(_EXCEPTION_REGISTRATION_RECORD, -0x1) temp0_1 = (ebx + 1)->Next - 1
                struct _EXCEPTION_REGISTRATION_RECORD* ecx_7
                ecx_7.b = (ebx + 1)->Next:3.b
                ecx_7:1.w = (ebx + 1)->Handler.w
                ecx_7:3.b = (ebx + 1)->Handler:2.b
                (ebx + 1)->Next:3.b = temp0_1.b
                (ebx + 1)->Handler.w = temp0_1:1.w
                (ebx + 1)->Handler:2.b = temp0_1:3.b
                
                if (temp1_1 == 1)
                    (ebx + 1)->Next->Handler(ExceptionRecord)
                    bool cond:1_1 = (ebx + 1)->Handler != 1
                    (ebx + 1)->Handler
                    (ebx + 1)->Handler -= 1
                    
                    if (not(cond:1_1))
                        (ebx + 1)->Next->__offset(0x8).d()
            
            int32_t* var_70_3 = edi_2
            int32_t* var_74_2 = edi_2
            int32_t* var_78_1 = &var_30
            var_8_1.b = 4
            result, ecx_11 = sub_6c8930(var_30, var_14_1)
            
            if (result.b == 0)
                var_8_1.b = 2
                
                if (ecx_6 != 0)
                    bool cond:2_1 = ecx_6[1] != 1
                    ecx_11 = ecx_6[1]
                    ecx_6[1] -= 1
                    
                    if (not(cond:2_1))
                        ecx_11 = (*(*ecx_6 + 4))(ExceptionRecord)
                        struct _EXCEPTION_REGISTRATION_RECORD* ebx_4 = ecx_6[2]
                        ecx_6[2] -= 1
                        
                        if (ebx_4 == 1)
                            result, ecx_11 = (*(*ecx_6 + 8))()
                
                edi_1 = var_40
                ebx.b = 0
                break
            
            sub_578460(&var_40, &var_30)
            var_8_1.b = 2
            
            if (ecx_6 != 0)
                bool cond:3_1 = ecx_6[1] != 1
                ecx_6[1]
                ecx_6[1] -= 1
                
                if (not(cond:3_1))
                    (*(*ecx_6 + 4))(ExceptionRecord)
                    bool cond:4_1 = ecx_6[2] != 1
                    ecx_6[2]
                    ecx_6[2] -= 1
                    
                    if (not(cond:4_1))
                        (*(*ecx_6 + 8))()
            
            var_14_1 += 0x30
            int32_t ebx_3 = var_18_1 + 1
            var_18_1 = ebx_3
            
            if (ebx_3 s>= esi_3)
                edi_1 = var_40
                goto label_6c8dc3
    var_8_1.b = 1
    
    if (edi_1 != 0)
        void* var_70_9 = arg1
        struct _EXCEPTION_REGISTRATION_RECORD* var_74_5 = ecx_11
        sub_579a70(edi_1, var_3c_1)
        result, ecx_11 = j__free(edi_1)
    
    if (var_58_1 != 0)
        void* var_70_10 = arg1
        struct _EXCEPTION_REGISTRATION_RECORD* var_74_6 = ecx_11
        sub_6c9040(var_58_1, var_54_1)
        j__free(var_58_1)
    
    edx_1 = var_4c
else
    ebx.b = 0

if (edx_1 != 0)
    j__free(edx_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
