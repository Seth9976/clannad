// 函数: sub_6609a0
// 地址: 0x6609a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* esi = data_bac510
var_8:3.b = arg2
int32_t ecx = *(esi + 0x10b88)
int32_t edi = ecx + arg3

if (edi s>= 0 && *(esi + 0x10b90) + *(esi + 0x10b8c) + ecx s> edi
        && sub_6a5240(data_bac504 + 0x4b068, edi).b != 0)
    if (var_8:3.b == 0 || *(data_bac4e4 + 0x19b) == 0)
    label_660a24:
        *(data_bac4a0 + 0x1e4) = 0
        int32_t eax_5
        int32_t ecx_4
        eax_5, ecx_4 = sub_676540(7)
        
        if (arg5 != 0)
            sub_676610(4)
            eax_5, ecx_4 = sub_676610(2)
        
        if (arg4 != 0)
            int32_t var_18_2 = ecx_4
            sub_6018e0(data_bac468 + 0x304, 5)
        
        eax_5.b = 1
        return eax_5
    
    if (sub_60e120(data_bac510 + 0x10ae0) != 7)
        goto label_660a24

arg1.b = 0
return arg1
