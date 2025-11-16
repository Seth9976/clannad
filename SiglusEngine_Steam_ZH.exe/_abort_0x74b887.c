// 函数: _abort
// 地址: 0x74b887
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (sub_75b587() != 0)
    sub_75b5b0(0x16)

if ((data_b4c470 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    __call_reportfault(3, 0x40000015, 1)

__exit(3)
noreturn
