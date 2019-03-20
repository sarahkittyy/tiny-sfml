#pragma once

#include <SFML/Graphics.hpp>
#include <string>

#include "Context.hpp"

/**
 * @brief Called once, ever. Good for initializing the window, title, and other settings.
 * 
 */
void setup();

/**
 * @brief Called once per frame. Use this to draw the objects you need to.
 * 
 */
void draw();

namespace tiny
{
/////////////INTIALIZATION////////////

/**
 * @brief Create and initialize the window.
 * 
 * @param width The width of the window.
 * @param height The height of the window.
 */
void createWindow(unsigned width = 500, unsigned height = 500);

/**
 * @brief Sets the max framerate of the window.
 * 
 * @param max The maximum framerate.
 */
void framerate(unsigned max);

/**
 * @brief Set the title of the window.
 * 
 * @param title The new window title.
 */
void title(std::string title);

/**
 * @brief Clear the screen with the given color.
 * 
 * @param r Red component.
 * @param g Green component.
 * @param b Blue component.
 * 
 * @remarks Call once at the beginning of draw() to refresh drawing.
 */
void background(unsigned r, unsigned g, unsigned b);

/**
 * @brief Clear the screen with the given greyscale color.
 * 
 * @param v The greyscale color value.
 */
void background(unsigned v);

////////////////DRAWING////////////////

/**
 * @brief Set the fill color for drawn objects.
 * 
 * @param r Red
 * @param g Green
 * @param b Blue
 */
void fill(unsigned r, unsigned g, unsigned b);

/**
 * @brief Set the fill color for drawn objects.
 * 
 * @param v The greyscale color value.
 */
void fill(unsigned v);

/**
 * @brief Set the stroke color (outline) of drawn objects.
 * 
 * @param r Red
 * @param g Green
 * @param b Blue
 */
void stroke(unsigned r, unsigned g, unsigned b);

/**
 * @brief Set the stroke color (outline) of drawn objects.
 * 
 * @param v The greyscale color value.
 */
void stroke(unsigned v);

/**
 * @brief Set the width of the pen stroke of drawn objects..
 * 
 * @param width The stroke width.
 */
void strokeWidth(float width);

/**
 * @brief Draw a rectangle to the screen.
 * 
 * @param x The x position.
 * @param y The y position.
 * @param w The width.
 * @param h The height.
 */
void rect(float x, float y, float w, float h);

/////////////////TRANSFORMS/////////////
void resetTransform();

void translate(float x, float y);

void push();

void pop();

////////////////MAIN()/////////////////

/**
 * @brief Ignore this.
 */
int run();

};