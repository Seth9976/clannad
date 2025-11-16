// 函数: sub_546710
// 地址: 0x546710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x10)
    EndDialog(data_20c1744, 0)
else
    if (arg2 == 0x110)
        data_20c1744 = arg1
        sub_546660()
        return 0
    
    if (arg2 == 0x111 && arg3 == 0x4f4f)
        EndDialog(data_20c1744, 0)

return 0
