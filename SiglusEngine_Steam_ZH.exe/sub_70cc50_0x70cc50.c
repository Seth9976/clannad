// 函数: sub_70cc50
// 地址: 0x70cc50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d09f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1
int32_t result_1 = result
void** esi = arg2
void** ebx = esi

if (*(esi + 0xd) == 0)
    do
        sub_70cc50(ebx[2])
        ebx = *ebx
        void* var_18_1 = &esi[4]
        int32_t var_8_1 = 0
        int32_t* esi_1 = esi[0xb]
        
        if (esi_1 != 0)
            bool cond:0_1 = esi_1[1] != 1
            esi_1[1]
            esi_1[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi_1 + 4))(eax_2)
                bool cond:2_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:2_1))
                    (*(*esi_1 + 8))()
        
        int32_t var_8_2 = 0xffffffff
        
        if (esi[9] u>= 0x10)
            j__free(esi[4])
        
        esi[9] = 0xf
        esi[8] = 0
        esi[4].b = 0
        j__free(arg2)
        result = result_1
        esi = ebx
        arg2 = esi
    while (*(ebx + 0xd) == 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
