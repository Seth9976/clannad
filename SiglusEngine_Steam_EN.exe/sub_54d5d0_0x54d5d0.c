// 函数: sub_54d5d0
// 地址: 0x54d5d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* edx = &data_61fd0c

if (arg1 == 0)
    edx = &data_6201e8

void var_28
void* result = sub_4cfd70(&var_28, edx)
WPARAM wParam = 0

if (data_1321eb8 s> 0)
    void** edi_1 = data_20c2460
    
    do
        if (arg2 == 0)
            result = SendMessageA(GetDlgItem(data_20c22c0, 0x4f32), 0x102c, wParam, 2)
        
        if (arg2 != 0 || result != 0)
            result = *edi_1
            
            if (result != 0xffffffff && result != arg1)
                result = data_1333e3c
                *edi_1 = arg1
                
                if (result != 0)
                    result = result(2, &var_28, wParam, wParam, data_20c22c0, 0x4f32)
        
        wParam += 1
        edi_1 = &edi_1[1]
    while (wParam s< data_1321eb8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
