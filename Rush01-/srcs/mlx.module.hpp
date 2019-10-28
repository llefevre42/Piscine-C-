#ifndef MLX_MODULE_HPP
# define MLX_MODULE_HPP

# include <stdlib.h>
# include <fcntl.h>
extern "C" {
	# include <mlx.h>
}
# include <math.h>
#include "IMonitureDisplay.hpp"

class mlxDisplay : public IMonitureDisplay
{
	public:
		mlxDisplay(void);
		mlxDisplay(mlxDisplay const &instance);
		mlxDisplay &operator=(mlxDisplay const &rhs);
		~mlxDisplay(void);

        virtual void    getMonitureModule(bool graphBool, std::string infoType, int position, std::string Values);
		virtual void    refreshDisplay(void);
		virtual void    preframeOperations(void);

	private:
        void* mlx;									
        void* win;	
        void* pt_img;		
        unsigned int*img;

};

#endif