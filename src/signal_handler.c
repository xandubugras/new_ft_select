/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:38:53 by jrameau           #+#    #+#             */
/*   Updated: 2018/05/10 18:10:26 by adubugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_select.h>

/*
** Handles the suspend signal (ctrl + z)
**
** It resets the default terminal configurations,
** sets the suspend signal back to the default behavior
** and yields the suspend signal (/032 or /x1A) to keep suspending the program.
**
** @param		N/A
** @return		N/A
*/

/*
** Handles most of the stop signals (ctrl + c, kill, etc...)
**
** It resets the default terminal configurations,
** frees all allocated memories from the global variable
** and exits
**
** @param		N/A
** @return		N/A
*/

void		stop_signal_handler(void)
{
	reset_default_conf();
	free_args();
	exit(EXIT_SUCCESS);
}

/*
** Handles all the signals initilized during 'init_signal_handlers'
**
** @param		signo		The signal number of the current signal
** @return		N/A
*/

void		signal_handler(int signo)
{
	signo++;
	return ;
}
