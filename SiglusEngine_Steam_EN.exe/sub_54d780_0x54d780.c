// 函数: sub_54d780
// 地址: 0x54d780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx
void* result = sub_54d690(ecx)
int32_t ebx = data_1321eb8
int32_t esi = 0
int32_t* edi = data_20c2460

if (ebx s> 0)
    void* result_1 = data_1333e3c
    
    do
        result = *edi
        
        if (result != 0xffffffff)
            char* edx_1 = &data_61fd0c
            
            if (result == 0)
                edx_1 = &data_6201e8
            
            void var_28
            result = sub_4cfd70(&var_28, edx_1)
            
            if (result_1 != 0)
                result_1(2, &var_28, esi, esi, data_20c22c0, 0x4f32)
                result = data_1333e3c
                ebx = data_1321eb8
                result_1 = result
        
        esi += 1
        edi = &edi[1]
    while (esi s< ebx)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
