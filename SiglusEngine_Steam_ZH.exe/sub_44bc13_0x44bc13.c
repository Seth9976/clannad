// 函数: sub_44bc13
// 地址: 0x44bc13
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[5]

if (ecx != 0)
    sub_449fd0(ecx, 3)
    arg1[5] = 0

int32_t result = *arg1

if (result == 0 || result == 2 || result == 4)
label_44bc46:
    result = arg1[3]
    
    if (result != 0)
        result = j__free(result)
        arg1[3] = 0
else if (result s> 5 && result s<= 0xa)
    goto label_44bc46

if (arg1[6] != 0)
    int32_t edi
    int32_t var_c_2 = edi
    
    do
        void* edi_1 = arg1[6]
        arg1[6] = *(edi_1 + 0x18)
        *(edi_1 + 0x18) = 0
        sub_44bc13()
        result = j__free(edi_1)
    while (arg1[6] != 0)

return result
