// 函数: sub_5f98e7
// 地址: 0x5f98e7
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0 && arg1 u< data_20f34c8)
    int32_t ebx_2 = arg1 s>> 5
    int32_t edi_3 = (arg1 & 0x1f) << 6
    
    if (*(edi_3 + (&data_640ff8)[ebx_2]) == 0xffffffff)
        if (data_641108 == 1)
            if (arg1 == 0)
                SetStdHandle(STD_INPUT_HANDLE, arg2)
            else if (arg1 == 1)
                SetStdHandle(STD_OUTPUT_HANDLE, arg2)
            else if (arg1 == 2)
                SetStdHandle(STD_ERROR_HANDLE, arg2)
        
        *(edi_3 + (&data_640ff8)[ebx_2]) = arg2
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
