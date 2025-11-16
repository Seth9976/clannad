// 函数: sub_613af0
// 地址: 0x613af0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9befb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg2
void* result_2 = result
int32_t* i_1 = arg3
int32_t* i = i_1
int32_t* ebx = &i_1[4]
int32_t* var_18 = ebx

if (ebx != result)
    do
        int32_t eax_3 = *ebx
        int32_t* edi_1 = ebx
        void* result_1
        sub_5b5160(&result_1, &ebx[1])
        int32_t var_8_1 = 0
        int32_t var_58
        int32_t* var_24_1 = &var_58
        var_58 = *i_1
        void var_54
        sub_5b5160(&var_54, &i_1[1])
        var_8_1.b = 1
        void var_64
        sub_5b5160(&var_64, &result_1)
        var_8_1.b = 0
        
        if (arg4(eax_3) == 0)
            int32_t* esi_1 = ebx
            
            while (true)
                int32_t eax_12 = esi_1[-4]
                int32_t* var_28_1 = &var_58
                esi_1 -= 0x10
                var_58 = eax_12
                sub_5b5160(&var_54, &esi_1[1])
                var_8_1.b = 2
                sub_5b5160(&var_64, &result_1)
                var_8_1.b = 0
                
                if (arg4(eax_3) == 0)
                    break
                
                *edi_1 = *esi_1
                sub_6143d0(&edi_1[1], &esi_1[1])
                edi_1 = esi_1
            
            *edi_1 = eax_3
            sub_6143d0(&edi_1[1], &result_1)
            ebx = var_18
        else
            if (i != ebx)
                void* esi = &ebx[4]
                
                do
                    int32_t eax_8 = *(esi - 0x20)
                    esi -= 0x10
                    *esi = eax_8
                    sub_6143d0(esi + 4, esi - 0xc)
                while (esi - 0x10 != i)
            
            *i = eax_3
            sub_6143d0(&i[1], &result_1)
        
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0)
            void* result_3 = result
            int32_t var_30
            
            if (result != var_30)
                do
                    sub_5b4b40(result_3)
                    result_3 += 0x10
                while (result_3 != var_30)
                
                result = result_1
            
            result = j__free(result)
            result_1 = nullptr
            var_30 = 0
            int32_t var_2c_1 = 0
        
        i_1 = i
        ebx = &ebx[4]
        var_18 = ebx
    while (ebx != result_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
