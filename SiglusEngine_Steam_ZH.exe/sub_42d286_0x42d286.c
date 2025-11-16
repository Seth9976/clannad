// 函数: sub_42d286
// 地址: 0x42d286
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
char* arg_4
char* edi_1 = arg_4
char const* const esi = "__LINE__"
int32_t i = 9
bool cond:1 = false

while (i != 0)
    char const temp1_1 = *esi
    char temp2_1 = *edi_1
    cond:1 = temp1_1 != temp2_1
    esi = &esi[1]
    edi_1 = &edi_1[1]
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

if (not(cond:1))
    return *(arg1 + 0x28c)

if (sub_42cf1a(arg1, arg_4, &arg_4, &var_8) != 0)
    if (arg_4 != 0)
        sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0x5ed, 
            "functional defines in preprocessor expressions not yet implemented")
        return 1
    
    void* eax_3 = var_8
    
    if (eax_3 != 0 && *(eax_3 + 0xc) == 0)
        int32_t ecx_1 = *(eax_3 + 0x10)
        
        if (ecx_1 s>= 2 && ecx_1 s<= 4)
            return *(eax_3 + 0x18)
    
    sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0x5ee, 
        "invalid or unsupported integer constant expression")

return 0
