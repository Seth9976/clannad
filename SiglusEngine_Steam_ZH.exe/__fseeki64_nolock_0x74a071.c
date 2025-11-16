// 函数: __fseeki64_nolock
// 地址: 0x74a071
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]

if ((eax.b & 0x83) != 0)
    enum SET_FILE_POINTER_MOVE_METHOD edi_1 = arg4
    
    if (edi_1 == FILE_BEGIN || edi_1 == FILE_CURRENT || edi_1 == FILE_END)
        arg1[3] = eax & 0xffffffef
        int32_t* eax_4
        void* ebx_2
        
        if (edi_1 != FILE_CURRENT)
            eax_4 = arg3
            ebx_2 = arg2
        else
            void* eax_2
            int32_t edx_1
            eax_2, edx_1 = __ftelli64_nolock(arg1)
            ebx_2 = arg2 + eax_2
            eax_4 = adc.d(arg3, edx_1, arg2 + eax_2 u< arg2)
            edi_1 = FILE_BEGIN
        
        __flush(arg1)
        int32_t eax_5 = arg1[3]
        
        if (eax_5.b s< 0)
            arg1[3] = eax_5 & 0xfffffffc
        else if ((eax_5.b & 1) != 0 && (eax_5.b & 8) != 0 && (eax_5 & 0x400) == 0)
            arg1[6] = 0x200
        
        int32_t eax_8
        int32_t edx_2
        eax_8, edx_2 = __lseeki64(__fileno(arg1), ebx_2, eax_4, edi_1)
        
        if ((eax_8 & edx_2) == 0xffffffff)
            return 0xffffffff
        
        return 0

*__errno() = 0x16
return 0xffffffff
