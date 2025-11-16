// 函数: sub_4b9346
// 地址: 0x4b9346
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 0

if (sub_4b4917(*arg2 & 0xfff00000) == 0)
label_4b938e:
    
    if (arg2[5] u> 0)
        while (true)
            if (sub_4b9346(*(*(arg1 + 0x18) + (*(arg2[6] + (edi_1 << 2)) << 2)), arg3) == 0)
                return 0
            
            edi_1 += 1
            
            if (edi_1 u>= arg2[5])
                return 1
else if (arg2[5] != 0)
    if (arg3 u>= 1)
        sub_4a4100(arg1, arg2[0xf], 0x1194, 
            "dependent texture read chain cannot exceed 1 in ps_1_4")
        return 0
    
    arg3 += 1
    goto label_4b938e

return 1
