// 函数: sub_67eb80
// 地址: 0x67eb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7770
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68
int32_t var_7c = var_68
int32_t* var_80 = arg1
sub_642980(*arg1, arg1[1])
arg1[1] = *arg1
int32_t ecx_1 = arg2[1]
char* esi = *arg2
void* result

if (ecx_1 - esi u< 0x20)
    result.b = 0
else
    if (esi == ecx_1)
        esi = nullptr
    
    int32_t eax_5 = *(esi + 0x10)
    int32_t var_8_1 = 0
    int32_t var_30
    char eax_7 = sub_67f9f0(sub_541920(&var_30, esi), "CGTABLE2")
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30)
    
    char* result_1
    char var_48
    
    if (eax_7 == 0)
        int32_t var_8_4 = 4
        result = sub_67f9f0(sub_541920(&var_30, esi), "CGTABLE")
        int32_t var_8_5 = 0xffffffff
        char var_49_2 = result.b
        
        if (var_1c u>= 0x10)
            j__free(var_30)
            result.b = var_49_2
        
        if (result.b == 0)
            result.b = 0
        else
            void* ecx_30 = *arg2
            int32_t edx_7 = arg2[1]
            void* const edi_4 = ecx_30
            
            if (ecx_30 == edx_7)
                edi_4 = nullptr
            
            sub_71cda0(edi_4 + 0x20, edx_7 - ecx_30 - 0x20)
            result_1 = nullptr
            int32_t var_5c_2 = 0
            int32_t var_58_2 = 0
            int32_t var_8_6 = 5
            sub_5979b0(&result_1, sub_71cd20(edi_4 + 0x20, nullptr))
            char* result_3 = result_1
            
            if (result_3 == var_5c_2)
                result_3 = nullptr
            
            sub_71cd20(edi_4 + 0x20, result_3)
            char* result_5 = result_1
            
            if (result_5 == var_5c_2)
                result_5 = nullptr
            
            sub_67f5a0(arg1, eax_5)
            int32_t var_54_2 = 0
            
            if (eax_5 s> 0)
                int32_t var_50_2 = 0
                int32_t* esi_6 = 0x38
                int32_t ecx_36
                
                do
                    bool cond:7_1 = *result_5 != 0
                    int32_t var_34_2 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    void* eax_28
                    
                    if (cond:7_1)
                        char* result_6 = result_5
                        
                        do
                            ecx_36.b = *result_6
                            result_6 = &result_6[1]
                        while (ecx_36.b != 0)
                        
                        eax_28 = result_6 - &result_6[1]
                    else
                        eax_28 = nullptr
                    
                    sub_541eb0(&var_48, result_5, eax_28)
                    var_8_6.b = 6
                    int16_t* eax_29 = sub_6af1e0(&var_30)
                    var_8_6.b = 7
                    int32_t* ecx_40 = *arg1 + var_50_2
                    
                    if (ecx_40 != eax_29)
                        sub_52e3c0(ecx_40, eax_29, 0, 0xffffffff)
                    
                    if (var_1c u>= 8)
                        j__free(var_30)
                    
                    var_8_6.b = 5
                    var_1c = 7
                    int32_t var_20_2 = 0
                    var_30.w = 0
                    
                    if (var_34_2 u>= 0x10)
                        j__free(var_48.d)
                    
                    sub_6ae560(*arg1 + var_50_2)
                    int32_t eax_30 = *(result_5 + 0x20)
                    result_5 = &result_5[0x24]
                    *(*arg1 + var_50_2 + 0x18) = eax_30
                    *(*arg1 + var_50_2 + 0x1c) = 0
                    *(*arg1 + var_50_2 + 0x34) = var_54_2
                    ecx_36 = var_54_2 + 1
                    var_54_2 = ecx_36
                    var_50_2 += 0x4c
                    *(*arg1 + esi_6 - 0x18) = 0
                    *(esi_6 + *arg1) = 0xffffffff
                    *(*arg1 + esi_6 - 0x14) = 0
                    *(*arg1 + esi_6 + 4) = 0xffffffff
                    *(*arg1 + esi_6 - 0x10) = 0
                    *(*arg1 + esi_6 + 8) = 0xffffffff
                    *(*arg1 + esi_6 - 0xc) = 0
                    *(*arg1 + esi_6 + 0xc) = 0xffffffff
                    *(*arg1 + esi_6 - 8) = 0
                    *(*arg1 + esi_6 + 0x10) = 0xffffffff
                    esi_6 = &esi_6[0x13]
                while (ecx_36 s< eax_5)
            
            result = result_1
            
            if (result == 0)
                result.b = 1
            else
                j__free(result)
                result.b = 1
    else
        void* ecx_4 = *arg2
        int32_t edx_1 = arg2[1]
        void* const edi_1 = ecx_4
        
        if (ecx_4 == edx_1)
            edi_1 = nullptr
        
        sub_71cda0(edi_1 + 0x20, edx_1 - ecx_4 - 0x20)
        result_1 = nullptr
        int32_t var_5c_1 = 0
        int32_t var_58_1 = 0
        int32_t var_8_3 = 1
        sub_5979b0(&result_1, sub_71cd20(edi_1 + 0x20, nullptr))
        char* result_2 = result_1
        
        if (result_2 == var_5c_1)
            result_2 = nullptr
        
        sub_71cd20(edi_1 + 0x20, result_2)
        char* result_4 = result_1
        
        if (result_4 == var_5c_1)
            result_4 = nullptr
        
        sub_67f5a0(arg1, eax_5)
        int32_t var_54_1 = 0
        
        if (eax_5 s> 0)
            void* esi_3 = &result_4[0x38]
            int32_t var_50_1 = 0
            int32_t* edi_3 = 0x38
            int32_t eax_25
            
            do
                bool cond:9_1 = *(esi_3 - 0x38) != 0
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                void* ecx_12
                
                if (cond:9_1)
                    void* ecx_13 = esi_3 - 0x38
                    void* var_68_1 = ecx_13 + 1
                    void* eax_9
                    
                    do
                        eax_9.b = *ecx_13
                        ecx_13 += 1
                    while (eax_9.b != 0)
                    ecx_12 = ecx_13 - var_68_1
                else
                    ecx_12 = nullptr
                
                sub_541eb0(&var_48, esi_3 - 0x38, ecx_12)
                var_8_3.b = 2
                int16_t* eax_10 = sub_6af1e0(&var_30)
                var_8_3.b = 3
                int32_t* ecx_17 = *arg1 + var_50_1
                
                if (ecx_17 != eax_10)
                    sub_52e3c0(ecx_17, eax_10, 0, 0xffffffff)
                
                if (var_1c u>= 8)
                    j__free(var_30)
                
                var_8_3.b = 1
                var_1c = 7
                int32_t var_20_1 = 0
                var_30.w = 0
                
                if (var_34_1 u>= 0x10)
                    j__free(var_48.d)
                
                sub_6ae560(*arg1 + var_50_1)
                *(var_50_1 + *arg1 + 0x18) = *(esi_3 - 0x18)
                *(var_50_1 + *arg1 + 0x1c) = *esi_3
                *(var_50_1 + *arg1 + 0x34) = var_54_1
                var_50_1 += 0x4c
                *(*arg1 + edi_3 - 0x18) = *(esi_3 - 0x14)
                *(edi_3 + *arg1) = 0xffffffff
                *(*arg1 + edi_3 - 0x14) = *(esi_3 - 0x10)
                *(*arg1 + edi_3 + 4) = 0xffffffff
                *(*arg1 + edi_3 - 0x10) = *(esi_3 - 0xc)
                *(*arg1 + edi_3 + 8) = 0xffffffff
                *(*arg1 + edi_3 - 0xc) = *(esi_3 - 8)
                *(*arg1 + edi_3 + 0xc) = 0xffffffff
                int32_t eax_22 = *(esi_3 - 4)
                esi_3 += 0x3c
                *(*arg1 + edi_3 - 8) = eax_22
                *(*arg1 + edi_3 + 0x10) = 0xffffffff
                edi_3 = &edi_3[0x13]
                eax_25 = var_54_1 + 1
                var_54_1 = eax_25
            while (eax_25 s< eax_5)
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
