// 函数: sub_712890
// 地址: 0x712890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg3
void* var_94 = ebx
int32_t result = arg4
void* esi = ebx + 0x68
int32_t result_1 = result
void* var_8c = esi

if (esi != arg2)
    void* var_84_1 = esi - 0x68
    
    do
        void* edi_1 = esi
        struct NT3::C_d3d_effect_global_val::VTable* var_80
        sub_703520(&var_80, esi)
        int32_t var_8_1 = 0
        void* var_7c
        void* var_64
        void* var_4c
        void* var_34
        int32_t var_1c
        
        if (result_1(&var_80, ebx, eax_2) == 0)
            void* ebx_1 = var_84_1
            
            if (result_1(&var_80, var_84_1) != 0)
                void* esi_2 = var_84_1 + 0x1c
                char i
                
                do
                    if (edi_1 + 4 != esi_2 - 0x18)
                        sub_541b40(edi_1 + 4, esi_2 - 0x18, 0, 0xffffffff)
                    
                    if (edi_1 + 0x1c != esi_2)
                        sub_541b40(edi_1 + 0x1c, esi_2, 0, 0xffffffff)
                    
                    if (edi_1 + 0x34 != esi_2 + 0x18)
                        sub_541b40(edi_1 + 0x34, esi_2 + 0x18, 0, 0xffffffff)
                    
                    if (edi_1 + 0x4c != esi_2 + 0x30)
                        sub_541b40(edi_1 + 0x4c, esi_2 + 0x30, 0, 0xffffffff)
                    
                    int32_t eax_13 = *(esi_2 + 0x48)
                    esi_2 -= 0x68
                    *(edi_1 + 0x64) = eax_13
                    edi_1 = ebx_1
                    ebx_1 -= 0x68
                    i = result_1(&var_80, ebx_1)
                while (i != 0)
                esi = var_8c
            
            if (edi_1 + 4 != &var_7c)
                sub_541b40(edi_1 + 4, &var_7c, 0, 0xffffffff)
            
            if (edi_1 + 0x1c != &var_64)
                sub_541b40(edi_1 + 0x1c, &var_64, 0, 0xffffffff)
            
            if (edi_1 + 0x34 != &var_4c)
                sub_541b40(edi_1 + 0x34, &var_4c, 0, 0xffffffff)
            
            if (edi_1 + 0x4c != &var_34)
                sub_541b40(edi_1 + 0x4c, &var_34, 0, 0xffffffff)
            
            ebx = var_94
            *(edi_1 + 0x64) = var_1c
        else
            int32_t var_ac_3 = arg2
            sub_712eb0(var_84_1 + 0xd0, esi, ebx, var_84_1 + 0xd0)
            
            if (ebx + 4 != &var_7c)
                sub_541b40(ebx + 4, &var_7c, 0, 0xffffffff)
            
            if (ebx + 0x1c != &var_64)
                sub_541b40(ebx + 0x1c, &var_64, 0, 0xffffffff)
            
            if (ebx + 0x34 != &var_4c)
                sub_541b40(ebx + 0x34, &var_4c, 0, 0xffffffff)
            
            if (ebx + 0x4c != &var_34)
                sub_541b40(ebx + 0x4c, &var_34, 0, 0xffffffff)
            
            *(ebx + 0x64) = var_1c
        int32_t var_8_2 = 0xffffffff
        result = sub_702710(&var_80)
        var_84_1 += 0x68
        esi += 0x68
        var_8c = esi
    while (esi != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
