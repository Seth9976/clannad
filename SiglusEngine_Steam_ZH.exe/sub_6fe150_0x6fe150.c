// 函数: sub_6fe150
// 地址: 0x6fe150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce538
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_30 = 0

for (int32_t* i = *arg2; i != arg2[1]; i = &i[1])
    int32_t* edi_2 = *i
    char var_31_1
    int32_t* eax_4
    
    if (*edi_2 == 4)
        void var_20
        eax_4 = sub_6f5a20(edi_2, &var_20)
        ebx |= 1
        var_31_1 = 1
    
    if (*edi_2 != 4 || *eax_4 == 0)
        var_31_1 = 0
    
    if ((ebx.b & 1) != 0)
        ebx &= 0xfffffffe
        int32_t* var_1c
        
        if (var_1c != 0)
            bool cond:0_1 = var_1c[1] != 1
            var_1c[1] -= 1
            
            if (not(cond:0_1))
                (*(*var_1c + 4))(eax_2)
                bool cond:1_1 = var_1c[2] != 1
                var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:1_1))
                    (*(*var_1c + 8))()
    
    if (var_31_1 != 0)
        int32_t* var_28
        sub_6f5a20(edi_2, &var_28)
        int32_t var_c_1 = 0
        int32_t var_c_2 = 0xffffffff
        int32_t* var_24
        
        if ((*(*arg1 + 0x40))(edi_2, &edi_2[1], *var_28).b == 0)
            if (var_24 != 0)
                bool cond:2_1 = var_24[1] != 1
                var_24[1]
                var_24[1] -= 1
                
                if (not(cond:2_1))
                    (*(*var_24 + 4))(eax_2)
                    int32_t ebx_1 = var_24[2]
                    var_24[2] -= 1
                    
                    if (ebx_1 == 1)
                        (*(*var_24 + 8))()
            
            void* eax_12
            eax_12.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
        
        if (var_24 != 0)
            bool cond:3_1 = var_24[1] != 1
            var_24[1] -= 1
            
            if (not(cond:3_1))
                (*(*var_24 + 4))(eax_2)
                bool cond:4_1 = var_24[2] != 1
                var_24[2]
                var_24[2] -= 1
                
                if (not(cond:4_1))
                    (*(*var_24 + 8))()

int32_t* eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
